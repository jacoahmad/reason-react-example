/* ReactJS used by ReasonReact */
/* This component wraps a ReactJS one, so that ReasonReact components can consume it */
/* Typing the myBanner.js component's output as a `reactClass`. */
/* Note that this file's JS output is located at reason-react-example/lib/js/src/interop/myBannerRe.js; we're specifying the relative path to myBanner.js in the string below */
/* This isn't ideal; but if you turn on in-source js generation (check this file's bsconfig.json then you'd only need `"./MyBanner"`) */
[@bs.module]
external myBanner : ReasonReact.reactClass =
  "./MyBanner";

/* This is like declaring a normal ReasonReact component's `make` function, except the body is a the interop hook wrapJsForReason */
let make = (~show, ~message, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=myBanner,
    ~props={
      "show": show,
      "message": message /* OCaml string maps to JS string, no conversion needed here */
    },
    children,
  );
