# RSA Factoring Challenge

This repository contains two scripts for the RSA Factoring Challenge. The challenge involves factorizing numbers as quickly as possible, with a particular focus on RSA numbers.

## Table of Contents

- [Background Context](#background-context)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Background Context

We have sniffed an unsecured network and found numbers that are used to encrypt very important documents. It seems that those numbers are not always generated using large enough prime numbers. Your mission, should you choose to accept it, is to factorize these numbers as fast as possible before the target fixes this bug on their server - so that we can decode the encrypted documents.

## Installation

Clone the repository:

```bash
git clone https://github.com/yourusername/RSA-Factoring-Challenge.git
```

## Usage
Factorize all the things!
Factorize as many numbers as possible into a product of two smaller numbers.

`./factors <file>`

where <file> is a file containing natural numbers to factor.

Output format: n=p*q

RSA Factoring Challenge
RSA Laboratories states that: for each RSA number n, there exist prime numbers p and q such that n = p × q. The problem is to find these two primes, given only n.

./rsa <file>

where <file> is a file containing a single RSA number to factor.

Output format: n=p*q where p and q are prime numbers.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.