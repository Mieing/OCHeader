@class LOTAnimationView, UILabel;

@interface AWEDCFeedTapGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *imageView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)addNotifications;
- (void)removeSelf;
- (void)showByOrder;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
