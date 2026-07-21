// ==========================
// Animation au défilement
// ==========================


const elements = document.querySelectorAll(
    "section, .projet, .competence"
);


window.addEventListener("scroll", () => {


    elements.forEach(element => {


        const position = element.getBoundingClientRect().top;

        const hauteurEcran = window.innerHeight;



        if(position < hauteurEcran - 100){

            element.classList.add("apparition");

        }


    });


});





// ==========================
// Bouton retour en haut
// ==========================


const boutonTop = document.createElement("button");


boutonTop.innerHTML = "⬆";


boutonTop.className = "top";


document.body.appendChild(boutonTop);




boutonTop.addEventListener("click",()=>{


window.scrollTo({

top:0,

behavior:"smooth"

});


});





window.addEventListener("scroll",()=>{


if(window.scrollY > 500){

    boutonTop.style.display="block";

}

else{

    boutonTop.style.display="none";

}


});