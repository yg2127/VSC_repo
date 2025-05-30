document.addEventListener("DOMContentLoaded", function () {
    const modal = document.getElementById("myModal");
    const openBtn = document.getElementById("openBtn");
    const closeBtn = document.querySelector(".close");

    openBtn.addEventListener("click", function () {
        modal.style.display = "block";
    });

    closeBtn.addEventListener("click", function () {
        modal.style.display = "none";
    });
});