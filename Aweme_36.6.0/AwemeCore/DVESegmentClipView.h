@class NSString, UIImageView, UIView, DVESegmentClipBorderView, NSNumber;
@protocol DVESegmentClipViewDelegate;

@interface DVESegmentClipView : UIView <UIGestureRecognizerDelegate>

@property (class, readonly, nonatomic) double arrowWidth;

@property (retain, nonatomic) UIView *leftArrowView;
@property (retain, nonatomic) UIView *rightArrowView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) UIImageView *leftArrow;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (retain, nonatomic) NSNumber *positionNum;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultLeftEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultRightEdgeInsets;
@property (readonly, nonatomic) double space;
@property (readonly, nonatomic) double lineHeight;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<DVESegmentClipViewDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateUIConfig:(id)a0;
- (void)setEditClipViewHidden:(BOOL)a0;
- (void)setBorderClipViewHidden:(BOOL)a0;
- (void)dynamicAdjustmentHotspotIfNeeded;
- (BOOL)isPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)initWithMode:(unsigned long long)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)setupGestures;

@end
