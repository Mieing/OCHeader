@interface AWECommentSwiftBizUI.TemplateCellVirtualActionView : AWERLVirtualView {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ iconSize;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ component;
    void /* unknown type, empty encoding */ updateViewBlock;
    void /* unknown type, empty encoding */ actionType;
    void /* unknown type, empty encoding */ hitTestingInsets;
}

- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)setReuseIdentifier:(id)a0;

@end
