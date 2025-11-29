@class NSString, NSMutableSet, WXGameWidgetNode;

@interface GWHostBaseView : UIView

@property (retain, nonatomic) WXGameWidgetNode *rootNode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastCaculateFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } curConfigFrame;
@property (nonatomic) BOOL isChildDirty;
@property (retain, nonatomic) NSMutableSet *observedViews;
@property (copy, nonatomic) NSString *xmlFileName;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (BOOL)loadWithXmlFile:(id)a0;
- (unsigned long long)dynamicSizeStyle;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)configureLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isNewFrameSame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })calculateSizeWithLimit:(struct CGSize { double x0; double x1; })a0;
- (void)observeSubview:(id)a0;
- (void)removeObservedView:(id)a0;
- (void)markChildDirty:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
