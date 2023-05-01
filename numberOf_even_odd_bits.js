var evenOddBit = function(n) {
    
    let i = 0, even = 0, odd = 0;

    while(n) {
        if(i%2 == 0) {
           even = n&1?even+1:even;
        }
        else {
            odd = n&1?odd+1:odd;
        }

        i++;
        n >>= 1;
    }
    
    return [even, odd];
};

let n = 157;
console.log("Answer is: " + evenOddBit(n));