@class NSString, AWENearbyUGCPendantBackgroundView, UITapGestureRecognizer, AWENearbyPendantManager, UIImageView, AWENearbyPendantModel, LOTAnimationView, AWEBubble, UIViewController;

@interface AWENearbyUGCPendantView : UIView <AWENearbyUGCPendantBackgroundViewDelegate>

@property (retain, nonatomic) AWENearbyPendantManager *manager;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) AWEBubble *bubble;
@property (nonatomic) double originTop;
@property (nonatomic) double bubbleTop;
@property (nonatomic) BOOL shouldShowBubble;
@property (retain, nonatomic) AWENearbyUGCPendantBackgroundView *bubbleBackgroundView;
@property (nonatomic) double top;
@property (nonatomic) BOOL disableBubble;
@property (retain, nonatomic) AWENearbyPendantModel *model;
@property (weak, nonatomic) UIViewController *showInVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissBubble;
- (void)showToastIfNeeded;
- (void)removeSubViewContent;
- (BOOL)awe_shouldHandleResponder:(id)a0;
- (void)awe_touchDownInView:(id)a0;
- (void)onClicked:(id)a0;
- (void)showToast:(id)a0 forKey:(id)a1;
- (void)onBackgroundClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
