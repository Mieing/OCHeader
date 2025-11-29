@class NSArray;

@interface TOCropOverlayView : UIView

@property (retain, nonatomic) NSArray *horizontalGridLines;
@property (retain, nonatomic) NSArray *verticalGridLines;
@property (retain, nonatomic) NSArray *outerLineViews;
@property (retain, nonatomic) NSArray *topLeftLineViews;
@property (retain, nonatomic) NSArray *bottomLeftLineViews;
@property (retain, nonatomic) NSArray *bottomRightLineViews;
@property (retain, nonatomic) NSArray *topRightLineViews;
@property (nonatomic) BOOL gridHidden;
@property (nonatomic) BOOL displayHorizontalGridLines;
@property (nonatomic) BOOL displayVerticalGridLines;

- (id)createNewLineView;
- (void)layoutLines;
- (void)setGridHidden:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
