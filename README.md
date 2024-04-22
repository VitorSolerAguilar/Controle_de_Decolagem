# 🛫Controle de Decolagem🛫

## 📝Projeto desenvolvido para avaliação semestral da faculdade seguindo as seguintes exigencias: 

Você foi designado para desenvolver um sistema de controle de decolagem para um aeroporto. O sistema precisa determinar se um avião pode decolar com segurança, considerando várias condições para quatro fatores principais: peso do avião, comprimento da pista, velocidade do vento e altitude do aeroporto.

Considere os seguintes valores fixos para os fatores envolvidos:

<ul>
  <li>Peso do Avião: Peso máximo permitido para decolagem: 150.000 kg</li>
  <li>Comprimento da Pista: Comprimento mínimo necessário para decolagem: 1500 m</li>
  <li>Velocidade do Vento: Velocidade máxima permitida para decolagem: 30 km/h</li>
</ul>
<br>

O avião só pode decolar se atender a todas as seguintes condições:<br>
Peso do Avião:
<br>

  ### Se o peso do avião for menor ou igual a 100.000 kg:   
  <ul>
      <li>Se o comprimento da pista for maior ou igual a 1500 m, o avião pode decolar.</li>
      <li>Caso contrário, o avião não pode decolar devido ao comprimento insuficiente da pista.</li>
  </ul>
  
  ### Se o peso do avião for maior que 100.000 kg:
   <ul>
     <li>Se o comprimento da pista for maior ou igual a 2000 m, o avião pode decolar.</li>
     <li>Caso contrário, o avião não pode decolar devido ao comprimento insuficiente da pista.</li>
  </ul>

### Velocidade do Vento:
  <ul>
    <li>Se a velocidade do vento for menor ou igual a 30 km/h, o avião pode decolar.</li>
    <li>Caso contrário, o avião não pode decolar devido à alta velocidade do vento.</li>
  </ul>

### Altitude do Aeroporto:   
  <ul>
    <li>Se a altitude do aeroporto for menor ou igual a 1000 m, o avião pode decolar para um tamanho de pista mínimo de 1500m.</li>
    <li>Caso contrário, é necessário acrescentar a cada metro de altitude excedente, um metro de pista ao tamanho mínimo da pista.</li>
  </ul>

  <br><br>

  ## 🧠Massa de testes
  
| Peso Avião  | Tamanho Pista  | Vento  | Altitude  | Decola (S/N)|
|-------------|----------------|--------|-----------|-------------|
|     100     |      1500      |   20   |   1000    |      S      |
|     5000    |      1200      |   20   |   1000    |      N      |
|     100     |      1500      |   20   |   1001    |      N      |