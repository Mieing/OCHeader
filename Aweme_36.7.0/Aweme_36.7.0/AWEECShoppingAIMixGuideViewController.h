@class AWEECShoppingAIGuideSwitchAgentView, NSString, NSDictionary, NSMutableDictionary, UIView, AWEECShoppingAIGuideViewController;

@interface AWEECShoppingAIMixGuideViewController : UIViewController <AWEECShoppingAiGuidePageVCDelegate, AWEECShoppingAiGuidePageService>

@property (retain, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *mainVCPageName;
@property (retain, nonatomic) NSDictionary *subVCRouterParams;
@property (retain, nonatomic) NSMutableDictionary *subVCContainer;
@property (retain, nonatomic) UIView *switchAgentContainerView;
@property (retain, nonatomic) AWEECShoppingAIGuideSwitchAgentView *switchAgentView;
@property (nonatomic) BOOL isShowingSwitchAgentView;
@property (retain, nonatomic) AWEECShoppingAIGuideViewController *currentGuideVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)initWithInfo:(id)a0 guidePageInfo:(id)a1;
- (BOOL)isOnMixMode;
- (void)hideSwitchAgentView;
- (void)showSwitchAgentViewWithBackgroundImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)obtainVCAtIndex:(unsigned long long)a0;
- (id)createSubVCWithParams:(id)a0 delegate:(id)a1 atIndex:(unsigned long long)a2;
- (void)switchAgentAtIndex:(unsigned long long)a0;
- (void)onTapSwitchAgentContainer:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
