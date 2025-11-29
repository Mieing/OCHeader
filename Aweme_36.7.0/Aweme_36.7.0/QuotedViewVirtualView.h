@interface QuotedViewVirtualView : AWERLVirtualView {
    void /* unknown type, empty encoding */ replyName;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ quotedTagType;
    void /* unknown type, empty encoding */ quotedTagText;
    void /* unknown type, empty encoding */ action;
}

- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;

@end
