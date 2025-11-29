@class NSString, IESLiveECommerceModule;

@interface IESLiveECommerceModuleService : IESLiveGeneralBaseService <IESLiveECommerceModule>

@property (retain, nonatomic) IESLiveECommerceModule *originModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (id)anchorFlashSale;
- (id)createFeedDrawerListViewControllerWithDic:(id)a0;
- (void)resetTTLFloatPlayerView;
- (void)switchCommercialComponent:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)switchCommercialComponent:(unsigned long long)a0 shouldShowAlertIfSourceUnknown:(BOOL)a1 completion:(id /* block */)a2;
- (void)switchCommercialComponent:(unsigned long long)a0 alertCallBack:(id /* block */)a1 switchToolBarAPICallBack:(id /* block */)a2;
- (void)switchCommercialComponent:(unsigned long long)a0 skipAlert:(BOOL)a1 skipNetwork:(BOOL)a2 alertCallBack:(id /* block */)a3 switchToolBarAPICallBack:(id /* block */)a4;
- (unsigned long long)currentSourceComponent;
- (id)ecommerceFinishLiveComponent:(id)a0 trackContext:(id)a1 contextAttacher:(id)a2;
- (void).cxx_destruct;
- (id)anchor;
- (id)hostService;
- (id)audience;

@end
