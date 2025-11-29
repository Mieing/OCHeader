@class UIImageView, MMUIViewController, KindaModalController;

@interface WCPayBlurViewHelper : NSObject

@property (weak, nonatomic) MMUIViewController *controller;
@property (weak, nonatomic) KindaModalController *modal;
@property (retain, nonatomic) UIImageView *blurView;
@property (nonatomic) BOOL isFirstResponse;

- (id)initWithNavigationController:(id)a0;
- (id)initWithKindaModalController:(id)a0;
- (void)initCommon;
- (void)dealloc;
- (BOOL)isFirstResponderInView:(id)a0;
- (void)onApplicationWillEnterForeground:(id)a0;
- (void)onApplicationDidBecomeActive:(id)a0;
- (void)onApplicationWillResignActive:(id)a0;
- (void)onApplicationDidEnterBackground:(id)a0;
- (void).cxx_destruct;

@end
