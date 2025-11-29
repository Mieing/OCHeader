@class NSMutableArray, DitoNodeFlowLayoutItem;

@interface DitoNodeFlowLayout : DitoNodeLayout

@property (retain, nonatomic) NSMutableArray *columnItemList;
@property (retain, nonatomic) DitoNodeFlowLayoutItem *nextLayoutItem;
@property (readonly, nonatomic) double contentHeight;
@property (nonatomic) double subNodeWidth;
@property (nonatomic) BOOL isBottom;
@property (nonatomic) BOOL presetHeight;

- (void)setupNodeDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)nodeDidLayout;
- (void)layoutSubNodeLayout:(id)a0;
- (void)appendBottomMargin:(double)a0;
- (void)appendSubNodeSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupColumnItemList;
- (void)fetchSubNodeWidthWithDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)nextSubNodeLayoutItem;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fetchSubNodeDisplayFrame:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fetchSubNodeDisplayInset:(id)a0;
- (void)markBottomSubNodeLayoutWithContentHeight:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })nodeMargin;
- (id)findMinHeightItem;
- (id)findLastAvailableLayoutItemInList:(id)a0;
- (double)nextSubNodeWidth;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
