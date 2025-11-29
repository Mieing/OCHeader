@class NSString, AWESettingBaseViewModel;

@interface AWEPushSettingsSubItemController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (nonatomic) long long type;
@property (nonatomic) BOOL inner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)vcTitle;
- (id)initWithNotificationSettingModel:(id)a0 type:(long long)a1 inner:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)viewModel;

@end
