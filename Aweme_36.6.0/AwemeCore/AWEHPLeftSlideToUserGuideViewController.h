@class AWEHPLeftSlideToUserGuideView;
@protocol AWEHPLeftSlideToUserGuideViewControllerDelegate;

@interface AWEHPLeftSlideToUserGuideViewController : UIViewController

@property (retain, nonatomic) AWEHPLeftSlideToUserGuideView *guideView;
@property (weak, nonatomic) id<AWEHPLeftSlideToUserGuideViewControllerDelegate> delegate;

- (void)stopAutoDismissAnimation;
- (void)showOnVC:(id)a0 dismissCallBack:(id /* block */)a1 autoDismissWithAnimation:(BOOL)a2;
- (id)createViewConfig;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateWithContext:(id)a0;

@end
