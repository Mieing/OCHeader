@class NSString, CAShapeLayer, NSArray, UIView, UIPanGestureRecognizer, NSMutableArray;
@protocol AWESearchPhotoSelectionHandleViewDelegate;

@interface AWESearchPhotoSelectionHandleView : UIView <UIGestureRecognizerDelegate> {
    UIView *_rectangle;
    NSArray *_handles;
    NSMutableArray *_touchedHandles;
    UIView *_circleTL;
    UIView *_circleTR;
    UIView *_circleBL;
    UIView *_circleBR;
    NSMutableArray *_gestureRecognizers;
}

@property (retain, nonatomic) UIPanGestureRecognizer *moveViewPanGesture;
@property (retain, nonatomic) CAShapeLayer *topLeftLayer;
@property (retain, nonatomic) CAShapeLayer *topRightLayer;
@property (retain, nonatomic) CAShapeLayer *bottomLeftLayer;
@property (retain, nonatomic) CAShapeLayer *bottomRightLayer;
@property (retain, nonatomic) UIView *blackBG;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectedFrame;
@property (weak, nonatomic) id<AWESearchPhotoSelectionHandleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)selectionRadius;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regularRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 superBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (double)animationDuration;

- (void)closeWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (id)createLayerWithPath:(id)a0;
- (void)drawSelectionRect;
- (void)updateRectangleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleMoveSelf:(id)a0;
- (id)expandGroupsWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)closeGroupsWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)expandWithAnimation:(BOOL)a0 completion:(id /* block */)a1;

@end
