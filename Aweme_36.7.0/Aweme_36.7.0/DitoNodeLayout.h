@class DitoNode;

@interface DitoNodeLayout : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nodeFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } displayInset;
@property (weak, nonatomic) DitoNode *node;

- (void)setupNodeDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)nodeDidLayout;
- (void)layoutSubNodeLayout:(id)a0;
- (void)appendBottomMargin:(double)a0;
- (void)appendSubNodeSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })fitContentSizeByPresetHeightConfig:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
