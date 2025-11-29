@class NSString, UIImageView, BDPFloatingView_BDPSettingsManagerHg, UIVisualEffectView, BDPUniqueID;
@protocol BDPFloatingDelegate_HG;

@interface BDPFloatingView_HG : UIView <LOTAnimationDelegate, BDPContainerLifeCycleMessage>

@property (nonatomic) struct CGPoint { double x; double y; } safeAreaLeftTop;
@property (nonatomic) struct CGPoint { double x; double y; } safeAreaRightBottom;
@property (nonatomic) double radius;
@property (nonatomic) BOOL curPositionLeft;
@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeganPoint;
@property (nonatomic) double maxDistance;
@property (nonatomic) BOOL isTouch;
@property (nonatomic) struct CGVector { double dx; double dy; } delta;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFloatingView_BDPSettingsManagerHg *settingsManager;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly, nonatomic) BOOL atCloseZone;
@property (weak, nonatomic) id<BDPFloatingDelegate_HG> floatingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFloatingViewIfNeededWithSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUniqueID:(id)a1 delegate:(id)a2;

- (void)animationViewDidStart:(id)a0;
- (void)updateSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showOn:(id)a0;
- (void)event:(id)a0 param:(id)a1;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)setupIcon;
- (void)setupImageIcon;
- (void)setupLottieIcon;
- (void)touchesFinished;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;

@end
