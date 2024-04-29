@import url("https://fonts.googleapis.com/css2?family=Montserrat:wght@900&display=swap");

* {
  box-sizing: border-box;
}

body {
  font-family: "Montserrat", sans-serif;
  margin: 0;
  padding: 0;
  height: 100vh;
  line-height: 2.2;
  font-size: 0.875rem;
  display:flex;
  flex-direction: column;
}

h2 {
  margin-bottom: 1rem;
  color: #945113;
}

/* img {
  height: 48px;
  width: 150px;
}

i {
  font-size: 3rem;
  color: #1e8cfa;
} */

nav {
  background: rgba(35, 25, 17, 0.986);
  box-shadow: 0 5px 15px #634b01;
}

.nav-main {
  max-width: 95%;
  /* margin: 0 0.2rem 0 0.2rem; */
  display: flex;
  align-items: center;
  justify-content: flex-start;
}

.nav-header {
  display: flex;
  align-items: center;
  justify-content: space-between;
}

.menu {
  height: auto;
  display: flex;
}

ul {
  list-style-type: none;
  font-family: sans-serif;
}

a {
  text-decoration: none;
}

.menu a {
  color: #f0f1f2;
  font-weight: lighter;
  font-family: "Segoe UI", Tahoma, Geneva, Verdana, sans-serif;
  font-size: 1rem;
  letter-spacing: 0.1rem;
  display: block;
  padding: 0;
  margin: 0 0.5rem;
  transition: all 0.3s linear;
}

.menu a:hover {
  background: #3b4853;
  color: #ecf5fa;
}

.welcome-msg {
  display: flex;
  color: #835425;
  justify-content: center;
  font-family: sans-serif;
}

.banner-div {
  margin-top: 0;
}

#banner1 {
  height: 400px;
  width: 100%;
}

.footer {
  background-color: #dfb998;
  color: #835425;
  font-weight: lighter;
  font-family:'Times New Roman', Times, serif;
  text-align: left;
  margin-left: 0.1rem;
  margin-top: auto;
}