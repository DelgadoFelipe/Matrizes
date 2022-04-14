<?

# alterar a variavel abaixo colocando o seu email

$destinatario = "amandinhaferreiradelgado240@gmail.com";

$nome = $_REQUEST['Nome'];
$email = $_REQUEST['Email'];
$Celular = $_REQUEST['Celular'];

 // monta o e-mail na variavel $body

$body = "===================================" . "\n";
$body = $body . "FALE CONOSCO - TESTE COMPROVATIVO" . "\n";
$body = $body . "===================================" . "\n\n";
$body = $body . "Nome: " . $nome . "\n";
$body = $body . "Email: " . $email . "\n";
$body = $body . "Celular: " . $Celular. "\n\n";
$body = $body . "===================================" . "\n";

// envia o email
mail($destinatario, $assunto , $body, "From: $email\r\n");

// redireciona para a página de obrigado
header("location:obrigado.html")

?>