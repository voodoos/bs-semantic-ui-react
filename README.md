# bs-semantic-ui-react


A work in progress Bucklescript and ReasonReact set of bindings for [Semantic UI React](https://react.semantic-ui.com). 

You can find a example usage of theses bindings in the ElpIDE project : [source](https://github.com/voodoos/ElpIDE) || [demo](https://voodoos.github.io/ElpIDE/)



## Introduction

This is an early work in progress that I build to fulfill my need. But I hope it is a clean enough basis for anyone to participate (there are loads of components with hundreds of properties in Semantic UI React).

The method I used to create these bindings is well documented in [this blog post by Khoa Nguyen](https://khoanguyen.me/writing-reason-react-bindings-the-right-way/).


## Installation
To use these bindings in an existing ReasonReact project simply add the repository to your dependencies :

```
yarn add "https://github.com/voodoos/bs-semantic-ui-react"
```

And ask `bsb` to use it by adding `bs-semantic-ui-react` to `bs-dependencies` in your `bsconfig.json`.

You will also need to load semantic-ui's css, here is one way to do it :

```reason
[%bs.raw {|require('semantic-ui-css/semantic.min.css')|}];
```


## Contributions

All contributions are welcomed.

## LICENSE

MIT (see LICENSE file for more details)
