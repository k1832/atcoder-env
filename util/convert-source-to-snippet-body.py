import re, sys, os

if __name__ == "__main__":
    base_path = os.path.abspath(os.path.dirname(__file__))

    argc = len(sys.argv)

    # Resolve full_path
    if argc == 1:
        file_name = "main.cpp"
        full_path = os.path.join(base_path, file_name)
    elif argc == 2:
        full_path = sys.argv[1]
    else:
        raise RuntimeError("Wrong number of arguments")

    with open(full_path, mode='r') as f:
        lines = [line.rstrip() for line in f.readlines()]

    # Search characters needed to be escaped
    for i, line in enumerate(lines):
        lines[i] = '"' + re.sub(r'([\\"])', r'\\\1', line) + '"'
    print(",\n".join(lines))
