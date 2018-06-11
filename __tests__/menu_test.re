open Jest;
open SemanticUi;

describe("Component", () =>
  ExpectJs.(
    test("renders", () => {
      let component = ReactShallowRenderer.renderWithRenderer(<Menu />);

      expect(Js.Undefined.return(component)) |> toMatchSnapshot;
    })
  )
);

describe("Expect.Operators", () => {
  open Expect;
  open! Expect.Operators;

  test("==", () =>
    expect(1 + 2) === 3
  );
});