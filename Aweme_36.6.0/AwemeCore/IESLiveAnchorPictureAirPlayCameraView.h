@interface IESLiveAnchorPictureAirPlayCameraView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragCenterRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragRightBottomRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragUnionRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragLeftBottomRect;
@property (nonatomic) struct CGPoint { double x; double y; } dragCenterRectCenter;
@property (nonatomic) struct CGPoint { double x; double y; } dragRightBottomRectCenter;
@property (copy, nonatomic) id /* block */ didEndPanBlock;

- (void)setupPanGesture;
- (void)setupParams;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dragCenterRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dragRightBottomRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;

@end
