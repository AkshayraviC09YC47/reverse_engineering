package main

import (
	"fmt"
	"os"
)

func main() {

	arg := os.Args[1]
	fmt.Println("Checking License Key: " + arg)
	if arg == "XQWS-JIWN-NQNE-TRSC" {
		fmt.Println("Access Granted!")
	} else {
		fmt.Println("Wrong Key! Try Again")
	}

}
