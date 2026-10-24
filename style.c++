<!DOCTYPE html>
<html>
<head>
    <title>Simple Calculator</title>
</head>
<body>

    <h2>Calculator</h2>

    <input type="text" id="display" readonly>

    <br><br>

    <button onclick="display.value += '7'">7</button>
    <button onclick="display.value += '8'">8</button>
    <button onclick="display.value += '9'">9</button>
    <button onclick="display.value += '/'">/</button>

    <br><br>

    <button onclick="display.value += '4'">4</button>
    <button onclick="display.value += '5'">5</button>
    <button onclick="display.value += '6'">6</button>
    <button onclick="display.value += '*'">*</button>

    <br><br>

    <button onclick="display.value += '1'">1</button>
    <button onclick="display.value += '2'">2</button>
    <button onclick="display.value += '3'">3</button>
    <button onclick="display.value += '-'">-</button>

    <br><br>

    <button onclick="display.value += '0'">0</button>
    <button onclick="display.value += '.'">.</button>
    <button onclick="display.value = eval(display.value)">=</button>
    <button onclick="display.value += '+'">+</button>

    <br><br>

    <button onclick="display.value = ''">C</button>

</body>
</html>