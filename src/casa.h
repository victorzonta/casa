char Casa[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Casa</title>
    <style>
    h1{
        display: block;
        text-align: center;
    }
    div.cores{
        display: flex;
        justify-content: center;
    }
    button {
    width: 150px;
    height: 100px;
    font-size: 20px;
    }
    #quarto{
        background-color: #fff;
    }
    #quartooff{
        background-color:#000;
        color: white;
    }
    #garagem{
        background-color:#fff;
    }
    #garagemoff{
        background-color:#000;
        color: white;
    }
    #escritorio{
        background-color:#fff;
    }
    #escritoriooff{
        background-color:#000;
        color: white;
    }
    #sala{
        background-color: #fff;
    }
    #salaoff{
        background-color: #000;
        color: white;
    }
    #casa{
        background-color: #fff;
    }
    #casaoff{
        background-color: #000;
        color: white;
    }
    </style>
</head>
<body>
    <h1> ligue o comodo da casa </h1>
    <div class = "cores">      
        <button id = "quarto">quarto</button>   
        <button id = "quartooff">quartooff</button>   
        <button id = "garagem">garagem</button>   
        <button id = "garagemoff">garagemoff</button>  
        <button id = "escritorio">escritorio</button>
        <button id = "escritoriooff">escritoriooff</button>   
        <button id = "sala">sala</button>       
        <button id = "salaoff">salaoff</button>   
        <button id = "casa">casa</button> 
        <button id = "casaoff">casaoff</button>  

    </div>

    <script>
        function requisita(botao){
            let request = new XMLHttpRequest();
            url = `\\${botao.id}`
            console.log(url);
            request.open("POST", url, true);
            request.send();
        }

        const btnquarto = document.getElementById("quarto");
        btnquarto.addEventListener("click", function(){requisita(btnquarto)});
        let btnquartooff = document.getElementById("quartooff");
        btnquartooff.addEventListener("click", function(){requisita(btnquartooff)});
        let btngaragem = document.getElementById("garagem");
        btngaragem.addEventListener("click", function(){requisita(btngaragem)});
        let btngaragemoff= document.getElementById("garagemoff");
        btngaragemoff.addEventListener("click", function(){requisita(btngaragemoff)});
        let btnescritorio = document.getElementById("escritorio");
        btnescritorio.addEventListener("click", function(){requisita(btnescritorio)});
        let btnescritoriooff = document.getElementById("escritoriooff");
        btnescritoriooff.addEventListener("click", function(){requisita(btnescritoriooff)});
        let btnsala = document.getElementById("sala");
        btnsala.addEventListener("click", function(){requisita(btnsala)});
        let btnsalaoff = document.getElementById("salaoff");
        btnsalaoff.addEventListener("click", function(){requisita(btnsalaoff)});
        let btncasa = document.getElementById("casa");
        btncasa.addEventListener("click", function(){requisita(btncasa)});
        let btncasaoff = document.getElementById("casaoff");
        btncasaoff.addEventListener("click", function(){requisita(btncasaoff)});
        
       
    </script>
</body>
</html>
)=====";