// Animation d'apparition au défilement

const elements = document.querySelectorAll(
    "section, .projet, .competence"
);


const observer = new IntersectionObserver((entries)=>{

    entries.forEach(entry=>{

        if(entry.isIntersecting){

            entry.target.classList.add("visible");

        }

    });

}, 
{
    threshold:0.15
});


elements.forEach(element=>{

    element.classList.add("hidden");

    observer.observe(element);

});




// Effet machine à écrire corrigé

const titre = document.querySelector("#accueil h1");

const texte = "Bonjour, je suis Jody Hessa";

titre.innerHTML = "";

let index = 0;


function ecrire(){

    if(index < texte.length){

        titre.innerHTML += texte.charAt(index);

        index++;

        setTimeout(ecrire,80);

    }

}


ecrire();