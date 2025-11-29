@class NSArray, UIColor, NSString;
@protocol AWEVideoEffectScalableRangeViewDelegate;

@interface AWEVideoEffectScalableRangeView : UIView <AWEVideoEffectRangeProtocol>

@property (nonatomic) unsigned long long touchPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (retain, nonatomic) NSArray *panTouchPositionProhibits;
@property (nonatomic) BOOL playVibrateLimitFlag;
@property (retain, nonatomic) id feedBackGenertor;
@property (weak, nonatomic) id<AWEVideoEffectScalableRangeViewDelegate> delegate;
@property (retain, nonatomic) UIColor *effectColor;
@property (nonatomic) BOOL useEnhancedHandle;
@property (nonatomic) double leftBoundary;
@property (nonatomic) double rightBoundary;
@property (nonatomic) double minLength;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateNormalizedRangeFrom:(double)a0 to:(double)a1;
- (void)removeFromContainer;
- (void)setUpGesture;
- (void)playVibrate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 panTouchPositionProhibits:(id)a1;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
