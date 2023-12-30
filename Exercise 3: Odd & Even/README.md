## Exercise Description

Write two functions, ``isOdd()`` and ``isEven()``, with a single numeric parameter named
``number``. The ``isOdd()`` function returns ``True`` if ``number`` is ``odd`` and ``False`` if ``number`` is even. The
``isEven()`` function returns the ``True`` if ``number`` is ``even`` and ``False`` if ``number`` is ``odd``. Both
functions return ``False`` for numbers with fractional parts, such as ``3.14`` or ``-4.5``. ``Zero`` is considered
an even number.

These C++ assert statements stop the program if their condition is False. Copy them inside the main function of your solution program. Your solution is correct if the following assert statements’
conditions are all ``True``:

    assert(isOdd(42) == false);
    assert(isOdd(9999) == true);
    assert(isOdd(-10) == false);
    assert(isOdd(-11) == true);
    //assert(isOdd(3.1415) == false);
    assert(isEven(4.1415) == true);
    assert(isEven(42) == true);
    assert(isEven(9999) == false);
    assert(isEven(-10) == true);
    assert(isEven(-11) == false);
    assert(isEven(3.1415) == false);

    
