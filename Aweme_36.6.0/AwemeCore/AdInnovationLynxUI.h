@class AdInnovationContainerManager, AdInnovationResourceService, NSString;

@interface AdInnovationLynxUI : LynxUI <AdInnovationContainerManagerDelegate, AdInnovationEventReporterProtocol>

@property (retain, nonatomic) AdInnovationContainerManager *innovationAd;
@property (retain, nonatomic) AdInnovationResourceService *resourceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__601;
+ (id)__lynx_prop_config__652;
+ (id)__lynx_ui_method_config__723;
+ (id)__lynx_ui_method_config__944;
+ (id)__lynx_ui_method_config__1035;
+ (id)__lynx_ui_method_config__1116;
+ (id)__lynx_ui_method_config__1167;
+ (id)__lynx_ui_method_config__1218;
+ (id)__lynx_ui_method_config__1269;
+ (id)__lynx_ui_method_config__13510;
+ (id)__lynx_ui_method_config__15311;

- (void)innovationAdCloseContainer;
- (void)innovationAd:(id)a0 clickParams:(id)a1;
- (void)innovationAd:(id)a0 notificationParams:(id)a1;
- (void)innovationAd:(id)a0 hiddenLeftContainer:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innovationAd:(id)a0 viewFrameWithName:(id)a1;
- (void)innovationAdRenderSuccess;
- (void)innovationAdTrackWithContext:(id)a0;
- (void)emitEvent:(id)a0 payload:(id)a1;
- (void)width:(double)a0 requestReset:(BOOL)a1;
- (void)height:(double)a0 requestReset:(BOOL)a1;
- (void)setupInnovationAd:(id)a0 withResult:(id /* block */)a1;
- (void)downloadResource:(id)a0 withResult:(id /* block */)a1;
- (void)loadInnovationAd:(id)a0 withResult:(id /* block */)a1;
- (void)appear:(id)a0 withResult:(id /* block */)a1;
- (void)destory:(id)a0 withResult:(id /* block */)a1;
- (void)disAppear:(id)a0 withResult:(id /* block */)a1;
- (void)registerSafeAreaList:(id)a0 withResult:(id /* block */)a1;
- (void)viewPositionChanged:(id)a0 withResult:(id /* block */)a1;
- (void)hidden:(id)a0 withResult:(id /* block */)a1;
- (void)destory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;

@end
