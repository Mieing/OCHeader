@class NSDictionary, AWEEnterpriseIMMessageCardBaseViewModel, NSString;

@interface AWEIMEnterpriseServiceMessageViewModel : AWEIMMessageViewModel <IESIMEnterpriseServiceMessageViewModelProtocol>

@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEEnterpriseIMMessageCardBaseViewModel *enterpriseCardViewModel;
@property (copy, nonatomic) id /* block */ didUpdateSyncExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configViewModelWithRouterParams:(id)a0 conversation:(id)a1;
- (void)setupWithMessage:(id)a0;
- (void)__addKVOController;
- (void)p_configEnterpriseCardViewModel;
- (void)p_initEnterpriseViewModel;
- (void)p_configCommonEnterpriseCardViewModel;
- (void)p_configLynxEnterpriseCardViewModel;
- (id)p_lynxSourceURL;
- (id)p_lynxInitialProperties;
- (id)p_lynxSmartCardSourceURL;
- (id)p_lynxCompanyCollectInfoSourceURL;
- (id)p_lynxSmartCardInitialProperties;
- (id)p_lynxCompanyCollectInfoInitialProperties;
- (void).cxx_destruct;

@end
