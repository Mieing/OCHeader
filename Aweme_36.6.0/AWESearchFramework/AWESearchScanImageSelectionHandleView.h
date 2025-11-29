@class NSTimer, NSString, UIView, NSArray, CAShapeLayer, UIButton, UIPanGestureRecognizer, NSMutableArray, UILabel;
@protocol AWESearchScanImageSelectionHandleViewDelegate;

@interface AWESearchScanImageSelectionHandleView : UIView <UIGestureRecognizerDelegate> {
    UIView *_rectangle;
    NSArray *_handles;
    NSMutableArray *_touchedHandles;
    UIView *_circleTL;
    UIView *_circleTR;
    UIView *_circleBL;
    UIView *_circleBR;
    NSMutableArray *_gestureRecognizers;
}

@property (retain, nonatomic) UIView *indexView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIButton *handleViewButton;
@property (retain, nonatomic) UIPanGestureRecognizer *moveViewPanGesture;
@property (retain, nonatomic) CAShapeLayer *roundedRectLayer;
@property (retain, nonatomic) CAShapeLayer *topLeftLayer;
@property (retain, nonatomic) CAShapeLayer *topRightLayer;
@property (retain, nonatomic) CAShapeLayer *bottomLeftLayer;
@property (retain, nonatomic) CAShapeLayer *bottomRightLayer;
@property (nonatomic) BOOL isScanQuestionMode;
@property (retain, nonatomic) UIView *blackBG;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (nonatomic) BOOL hasDragFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (nonatomic) long long index;
@property (weak, nonatomic) id<AWESearchScanImageSelectionHandleViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ shouldSkipHandleBlock;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (nonatomic) BOOL currentSelectedTabIsScanQuestion;
@property (nonatomic) unsigned long long currentSelectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)selectionRadius;
+ (double)scanQuestionSelectionRadius;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regularRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 superBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 needLimitMinSize:(BOOL)a2;

- (id)createLayerWithPath:(id)a0;
- (void)drawSelectionRect;
- (void)updateRectangleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleMoveSelf:(id)a0;
- (id)expandGroupsWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)createRoundedRectLayerWithPath:(id)a0;
- (void)destoryDelayTimer;
- (double)selectionInsetOffset;
- (void)updateIndexFrame;
- (void)searchScanGeneralStartRequestNotification;
- (void)delayHandleViewSelectionChangeEnded;
- (struct CGPoint { double x0; double x1; })moveRectangleRectInSuperBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isScanQuestionMode:(BOOL)a1 currentSelectedTabIsScanQuestion:(BOOL)a2;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setHidden:(BOOL)a0;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)expandWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)closeWithCompletion:(id /* block */)a0;

@end
