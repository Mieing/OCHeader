@class ACCSlidingTabbarView, NSString, ACCSlidingViewController, ACCBaseSlidingTabViewConfig;
@protocol ACCBaseSlidingTabViewDelegate;

@interface ACCBaseSlidingTabViewController : UIViewController <ACCSlidingViewControllerDelegate>

@property (retain, nonatomic) ACCBaseSlidingTabViewConfig *config;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (nonatomic) long long selectIndex;
@property (weak, nonatomic) id<ACCBaseSlidingTabViewDelegate> delegate;
@property (nonatomic) long long currentSelectIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(long long)a0;
- (void)createSubview;
- (void)createLayoutSubview;
- (void)replaceButtonOriginImage:(id)a0 title:(id)a1 atIndex:(long long)a2 normalColor:(id)a3 selectColor:(id)a4;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
