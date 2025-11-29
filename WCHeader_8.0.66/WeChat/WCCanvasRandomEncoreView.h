@class UILabel, WCAdInteractionDeviceMotionContainer, NSNumber, NSString, UIView, WCCanvasRandomLayoutEncoreInfo, WCAdURLImageView;
@protocol WCCanvasRandomEncoreViewDelegate;

@interface WCCanvasRandomEncoreView : UIView <WCAdInteractionDeviceMotionContainerDelegate>

@property (retain, nonatomic) WCCanvasRandomLayoutEncoreInfo *encoreInfo;
@property (weak, nonatomic) id<WCCanvasRandomEncoreViewDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCAdURLImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL didShowEncoreAnimation;
@property (retain, nonatomic) WCAdInteractionDeviceMotionContainer *deviceMotionContainer;
@property (retain, nonatomic) NSNumber *maxAccelerationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForRandomEncoreInfo:(id)a0 orientation:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 encoreInfo:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)generateContainerView;
- (void)notifyViewStatusChanged:(BOOL)a0;
- (void)switchToNormalState;
- (BOOL)isDeviceMotionRunning;
- (void)resetRandomEncoreView;
- (void)shakeRandomViewDelay;
- (void)shakeRandomView;
- (void)showShakeAnimationToView:(id)a0;
- (void)hideEncoreView;
- (void)updateMaxAccelerationWithX:(double)a0 y:(double)a1;
- (id)fetchMaxAccelerationInfo;
- (void)deviceMotionAccelerationChangedWithX:(double)a0 y:(double)a1 z:(double)a2;
- (void).cxx_destruct;

@end
