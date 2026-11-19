<div align="center">

<img src="sce_sys/icon0.png" width="140" alt="Nuvio PS4">

# Nuvio PS4

**Nuvio TV no seu PS4 desbloqueado — catálogo, addons e streaming direto da TV.**

[![Downloads](https://img.shields.io/github/downloads/bielstar123-source/nuvio-ps4/total?style=for-the-badge&label=Downloads&color=2ea043)](https://github.com/bielstar123-source/nuvio-ps4/releases)
[![Última versão](https://img.shields.io/github/v/release/bielstar123-source/nuvio-ps4?style=for-the-badge&label=Vers%C3%A3o)](https://github.com/bielstar123-source/nuvio-ps4/releases/latest)
[![Licença](https://img.shields.io/github/license/bielstar123-source/nuvio-ps4?style=for-the-badge)](LICENSE)

[![Buy Me a Coffee](https://img.shields.io/badge/Buy%20Me%20a%20Coffee-doar-FFDD00?style=for-the-badge&logo=buymeacoffee&logoColor=black)](https://www.buymeacoffee.com/SEU_USUARIO_BMC)

</div>

## Sobre

O **Nuvio PS4** é um port não oficial do [Nuvio TV](https://github.com/NuvioMedia/NuvioTVSmart) para o PS4 desbloqueado.
Instale o `.pkg`, abra o app **Nuvio** na tela inicial e ele abre o navegador do console direto no Nuvio.
Sem computador, sem servidor: a interface fica hospedada no GitHub Pages do próprio repositório.

Projeto gratuito e feito por fã, sem ligação com a Sony, o NuvioMedia ou o EVO Player.

## Baixar

Pegue o `.pkg` mais recente em **[Releases](https://github.com/bielstar123-source/nuvio-ps4/releases/latest)**.
O contador de downloads acima soma todos os downloads das releases.

## Apoie o projeto

Se o Nuvio PS4 te ajudou e você quiser retribuir, qualquer valor ajuda a manter as atualizações:

<a href="https://www.buymeacoffee.com/SEU_USUARIO_BMC"><img src="https://img.shields.io/badge/%E2%98%95%20Me%20pague%20um%20caf%C3%A9-FFDD00?style=for-the-badge&logoColor=black" alt="Me pague um café"></a>

Doar é opcional: o app continua 100% gratuito.

---

## Como funciona

1. O GitHub Actions publica a pasta `web/` (interface do Nuvio já pronta, vinda do release de PS5, com `ps5-input.js` trocado por `ps4-input.js`) no **GitHub Pages** deste repositório.
2. O mesmo workflow gera um **.pkg** (OpenOrbis) que, ao abrir, chama o navegador do PS4 na sua página.

> **Diferença para o PS5:** o port de PS5 usa o player nativo EVO (decoder de hardware do PS5), que não existe
> no PS4. Aqui o vídeo roda no player HTML5 do navegador do PS4, então só toca o que o navegador suporta
> (H.264/AAC em MP4 e HLS). Torrent/P2P e plugins que dependem de serviços locais não funcionam.

## Instalar

1. Crie um repositório (ex.: `nuvio-ps4`) e envie todos os arquivos desta pasta.
2. Em **Settings → Pages**, escolha **Source: GitHub Actions**.
3. Aba **Actions → Nuvio PS4 → Run workflow** (ou faça um push na `main`).
4. Ao terminar, baixe o artefato **Nuvio-PS4-pkg**, extraia o `.pkg` e instale no PS4 (USB ou Remote Package Installer).
5. Abra o app **Nuvio**: ele abre o navegador direto na página.

A URL usada é a do seu Pages (`https://SEU_USUARIO.github.io/nuvio-ps4/`); se o repositório for
renomeado, rode o workflow de novo para gerar um .pkg com a URL nova.

## Status

Não testado em console. Pontos a validar no PS4: abertura do navegador pelo launcher, navegação por D-pad
e reprodução de vídeo. Relate o que acontecer para ajustar `scripts/ps4-input.js` e `src/main.c`.

Licença GPL-3.0 (herdada do Nuvio TV).
