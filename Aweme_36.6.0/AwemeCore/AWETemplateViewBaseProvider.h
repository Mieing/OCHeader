@class NSDictionary, NSString, AWETemplateBaseViewModel, AWEPageContext, UIView, AWETemplateBarModel, AWETemplateBarContext;

@interface AWETemplateViewBaseProvider : NSObject <AWETemplateViewActionProtocol, AWEViewProviderProtocol, AWEBarLifeCycleProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) AWETemplateBaseViewModel *viewModel;
@property (retain, nonatomic) AWETemplateBarModel *barModel;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)viewModelClass;
+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (Class)viewClass;
+ (unsigned long long)activeType;

- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)aAWEPadModuleAdapter;
- (void)viewDidChangeBreakPoint;
- (void)viewDidTriggerAction:(unsigned long long)a0 withData:(id)a1;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)configViewModel;
- (unsigned long long)visibleType;
- (id)initWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
- (id)initWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
- (BOOL)canShowWhenWillDisplay;
- (void)viewController_viewWillDisplay;
- (void)viewController_viewDidDisplay;
- (void)configBarView;
- (id)createBarView;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)priority;
- (void)updateWithData:(id)a0;
- (void)configuration;
- (id)view;
- (void)reset;
- (id)identifier;

@end
