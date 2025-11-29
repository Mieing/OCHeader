@class WCAdInteractionDeviceMotionContainer, WCAdInteractionCoverInfo, PAGView, NSString, UIView, UILabel, NSNumber;
@protocol WCAdInteractionCoverViewDelegate;

@interface WCAdInteractionCoverView : UIView <WCAdInteractionDeviceMotionContainerDelegate>

@property (retain, nonatomic) WCAdInteractionCoverInfo *coverInfo;
@property (retain, nonatomic) UIView *backgroundCircleView;
@property (retain, nonatomic) PAGView *iconPAGView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) long long viewState;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) WCAdInteractionDeviceMotionContainer *deviceMotionContainer;
@property (retain, nonatomic) NSNumber *maxAccelerationInfo;
@property (weak, nonatomic) id<WCAdInteractionCoverViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coverInfo:(id)a1;
- (void)buildContentViews;
- (void)generateDeviceMotionContainer;
- (void)activeCoverView;
- (void)suspendCoverView;
- (void)terminateCoverView;
- (void)resetCoverView;
- (void)updateContentViewsWithState:(long long)a0 animated:(BOOL)a1;
- (void)updateContentViewsWithState:(long long)a0;
- (void)updateIconAnimationWithState:(long long)a0;
- (void)onUpdateCurrentVideoTime:(double)a0;
- (BOOL)isPlayerPlaying;
- (void)updateMaxAccelerationWithX:(double)a0 y:(double)a1 z:(double)a2;
- (id)fetchMaxAccelerationInfo;
- (void)deviceMotionAccelerationChangedWithX:(double)a0 y:(double)a1 z:(double)a2;
- (void).cxx_destruct;

@end
