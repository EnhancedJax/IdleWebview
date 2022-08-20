function capitalizeFirstLetter(string) {
  return string.charAt(0).toUpperCase() + string.slice(1);
}


/* -------------------------------------------------------------------------- */
/*                                    Load                                    */
/* -------------------------------------------------------------------------- */
function updateClock() {
  // var idletime = RainmeterAPI.getMeasure("Idletime").();
  var today = new Date();
  var date = today.getFullYear()+'-'+(today.getMonth()+1)+'-'+today.getDate();
  var time = today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds();
  document.getElementById('details').innerHTML = 'IDLESTYLE v2\n============\nIdletime: null\nTime: '+time+'\nDate: '+date;

  // call this function again in 1000ms
  setTimeout(updateClock, 1000);
}


window.onload = function() {
  const transition_els = document.querySelectorAll('.transition');
  setTimeout(() => {
    for (i = 0; i < transition_els.length; ++i) {
      const transition_el = transition_els[i];
      transition_el.classList.add('is-active');
    }
  }, 1000);
  updateClock(); // initial call
}

