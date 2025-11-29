@class AWEECShoppingAIGuideGrowingLabel, NSString, AWEECShoppingAIGuideContext, UIScrollView, AWEECShoppingAIGuideMessageGroupViewModel;

@interface AWEECShoppingAIGuideFullTextViewController : UIViewController <DUXBasicSheetProtocol>

@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEECShoppingAIGuideGrowingLabel *label;
@property (weak, nonatomic) AWEECShoppingAIGuideMessageGroupViewModel *weakGroupMessageViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)dux_titleForColoseButton;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
