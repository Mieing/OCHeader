@class CAGradientLayer, MMTimer, WCAdBulletScreenInfo, MMUIView, NSMutableArray;

@interface WCAdBulletScreenView : MMUIView

@property (retain, nonatomic) WCAdBulletScreenInfo *adBulletScreenInfo;
@property (retain, nonatomic) MMUIView *bulletTextContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSMutableArray *bulletTextViews;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (nonatomic) BOOL endureTimerScheduled;
@property (retain, nonatomic) MMTimer *logicTimer;

+ (double)calcBulletTextContainerHeightWithBulletScreenInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adBulletScreenInfo:(id)a1;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)startBulletAnimation;
- (void)stopBulletAnimation;
- (void)pauseBulletAnimation;
- (void)resumeBulletAnimation;
- (void)tryToScheduleEndureTimer;
- (void)scheduledTimerWithShootingTime:(double)a0 repeats:(BOOL)a1;
- (void)scheduleBulletShootingAnimation;
- (void).cxx_destruct;

@end
