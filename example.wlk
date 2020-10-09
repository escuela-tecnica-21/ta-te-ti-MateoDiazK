object mouse {
	var posicionX = 0
	var posicionY = 0
	method moverMouseX(moverX) {
		posicionX = posicionX + moverX	
	}
	method moverMouseY(moverY) {
		posicionY = posicionY + moverY
	}
}

object mousePad {
	var medidaX = 30
	var medidaXmen = -30
	var medidaY = 30
	var medidaYmen = -30
	method determinarMedidaX(medidaNuevaX){
		medidaX = medidaNuevaX
		medidaXmen = 0 - medidaNuevaX
		return "Medida en X actualizada."
	}
	method determinarMedidaY(medidaNuevaY){
		medidaY = medidaNuevaY
		medidaYmen = 0 - medidaNuevaY
		return "Medida en Y actualizada."
	}
}