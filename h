<!DOCTYPE html>
<html>
    <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
    <script src="https://kit.fontawesome.com/d3c9fc67a3.js" crossorigin="anonymous"></script>
        <title>Page Title</title>
    </head>
    <body>
        <main>
            <nav id="nav-mobile">
              <div><h3><i class="fa fa-city"></i> ALIERO</h3></div>
              <i class="fa fa-bars"></i>
            </nav>
            <ul id="ul-mobile">
            <li><i class="fa fa-home"></i><a href="#">Home</a></li>
            <li><i class="fa fa-history"></i><a href="#">History</a></li>
            <li><i class="fa fa-info-circle"></i><a href="#">About</a></li>
            <li><i class="fa fa-user"></i><a href="#">Contact</a></li>
            </ul>
        </main>
        <style>
            *{
    margin:0;
    padding:0;
    box-sizing:border-box;
}
main{
    width:100vw;
    position: absolute;
    background:dodgerblue;
}
nav{
    width:100%;
    height:65px;
    background:#11001b;
    color:#fefefe;
    display:flex;
    align-items:center;
    justify-content:space-between;
}
i.fa-bars{
    font-size:22.5px;
    padding:15px;
    transition:.1s;
}
i.fa-bars:active{
    background:rgba(255,255,255,.2);
}
nav i,div{
    margin:0 12px;
}
ul{
    width:180px;
    height:0px;
    overflow:hidden;
    background:#11001b;
    text-align:center;
    color:#fefefe;
    transition:.4s;
}
li i{
    padding:5px;
    font-size:20px;
}
li{
    list-style-type:none;
    transition:.2s;
    padding:5px;
}
li:hover{
    background:rgba(255,255,255,.3);
    scale:0.9;
}
li a{
    text-decoration:none;
    color:#fefefe;
    font-size:16px;
    cursor:none;
}
        </style>
        <script>
            let bars = document.querySelector("#nav-mobile");
            let ul = document.querySelector("#ul-mobile");
            let aysha = true;
    bars.addEventListener("click",()=>{
            if(!!aysha){
                ul.style.height="145px";
                aysha = false;
            }else{
                ul.style.height="0px";
                aysha = true;
            }
            });
        </script>
    </body>
</html>