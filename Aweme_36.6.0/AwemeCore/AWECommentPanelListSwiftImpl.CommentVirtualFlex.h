@interface AWECommentPanelListSwiftImpl.CommentVirtualFlex : AWERLVirtualFlexView {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ placeHolder;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ enableDownloadImageRerender;
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ blockAction;
    void /* unknown type, empty encoding */ createViewBlock;
    void /* unknown type, empty encoding */ updateViewBlock;
}

- (id)initWithAxis:(long long)a0 distribution:(long long)a1 alignment:(long long)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 subviews:(id)a1;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;

@end
