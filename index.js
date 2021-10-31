const canvas = document.querySelector("#gamefield")
const ctx = canvas.getContext("2d")

const game = new GameOfLife()
game.gameSetUp()

window.onload = () => {

    document.querySelector("#start-random").addEventListener("click", () => {
        var start = window.performance.now();
        game.arrayRandomize();
        game.fillArray();
        var end = window.performance.now();
        console.log(`Execution time: ${end - start} ms`);
    })

    document.querySelector("#stop").addEventListener("click", () => {
        game.gameSetUp();
    })

}
