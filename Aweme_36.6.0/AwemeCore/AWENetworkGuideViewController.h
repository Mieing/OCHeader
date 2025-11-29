@class UIScrollView, NSString;

@interface AWENetworkGuideViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)_createSectionBackground;
- (id)_createTitleLabel:(id)a0;
- (id)_createTextLabel:(id)a0;
- (id)_createSubtitleLabel:(id)a0;
- (id)_createIllustrationWithImage:(id)a0 text:(id)a1;
- (id)_createLabel:(id)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;
- (void)_configureViews;

@end
