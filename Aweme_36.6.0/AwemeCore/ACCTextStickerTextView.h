@class ACCEditPageTextStorage, NSMutableArray, ACCEditPageLayoutManager;

@interface ACCTextStickerTextView : ACCEditPageTextView

@property (retain, nonatomic) NSMutableArray *layerPool;
@property (retain, nonatomic) NSMutableArray *currentShowLayerArray;
@property (nonatomic) double caretInset;
@property (readonly, nonatomic) ACCEditPageLayoutManager *acc_layoutManager;
@property (readonly, nonatomic) ACCEditPageTextStorage *acc_textStorage;
@property (nonatomic) BOOL drawByContentSize;

- (void)drawPlainRectangleWithRects:(id)a0 fillColor:(id)a1;
- (void)drawWithLineRectArray:(id)a0 fillColor:(id)a1;
- (struct CGPoint { double x0; double x1; })topMidPointWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftTopWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftBottomWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })bottomMidPointWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)drawAlignmentLeftLineRectArray:(id)a0;
- (id)drawAlignmentRightLineRectArray:(id)a0;
- (id)drawAlignmentCenterLineRectArray:(id)a0;
- (struct CGPoint { double x0; double x1; })leftTopWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftBottomWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightTopWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightTopWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightBottomWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightBottomWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftTopCenterWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftBottomCenterWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftTopCenterWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })leftBottomCenterWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightTopCenterWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightBottomCenterWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightTopCenterWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })rightBottomCenterWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBackgroundWithFillColor:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
