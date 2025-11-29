@class NSString, NSDictionary, AWEUserLoginNavigationBarContext, AWEUserComponentSubtitleModel, UIViewController;

@interface AWEUserContainerBaseViewModel : NSObject

@property (retain, nonatomic) NSDictionary *componentDict;
@property (nonatomic) unsigned long long backStrategy;
@property (retain, nonatomic) UIViewController *nextPushVC;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) AWEUserLoginNavigationBarContext *naviBarContext;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (void)handleButtonClick;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)updateNavigationStatusWithViewController:(id)a0;
- (void)createComponentDict;
- (void)trackLoginEvent:(long long)a0 error:(id)a1;
- (id)navigationBarComponent;
- (id)resendComponent;
- (id)buttonComponent;
- (id)buttonNotAvailableToastText;
- (id)componentTypeList;
- (void)bindingComponentInfo;
- (void)viewModelBindingUI;
- (id)titleComponent;
- (id)subtitleComponent;
- (id)getComponentWithType:(unsigned long long)a0;
- (id)trackEventStringWithEventType:(long long)a0;
- (id)trackEventParamsWithEventType:(long long)a0;
- (id)getComponentViewWithType:(unsigned long long)a0;
- (void)updateNextPushVC:(id)a0;
- (id)protocolComponent;
- (id)verificationComponent;
- (id)loadingComponent;
- (void).cxx_destruct;

@end
