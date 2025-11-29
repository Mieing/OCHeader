@class AdInnovationManager, NSDictionary, NSString, BDASplashLynxConfiguration, LynxView;

@interface BDASplashCreativeLynxViewContainer : NSObject <LynxTemplateProvider, LynxResourceProvider, LynxResourceFetcher, LynxViewLifecycle, LynxImageFetcher, AdInnovationContainerProtocol, AdInnovationEventReporterProtocol>

@property (weak, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) AdInnovationManager *innovationManager;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (copy, nonatomic) NSDictionary *lynxConfig;
@property (retain, nonatomic) BDASplashLynxConfiguration *configuration;
@property (nonatomic) double parseStartTime;
@property (nonatomic) double loadStartTime;
@property (nonatomic) double loadEndTime;
@property (nonatomic) double containerInitStart;
@property (nonatomic) double containerInitEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxViewDidFirstScreen:(id)a0;
- (void)jsbRegister:(id)a0 registerHandlerBlock:(id /* block */)a1 forJSMethod:(id)a2;
- (void)jsbRegister:(id)a0 fireEvent:(id)a1 params:(id)a2;
- (void)lynxViewDidStartLoading:(id)a0;
- (void)lynxView:(id)a0 didLoadFinishedWithUrl:(id)a1;
- (void)lynxView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (id /* block */)loadResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)request:(id)a0 onComplete:(id /* block */)a1;
- (id)loadLynxView;
- (void)innovationAdCloseContainer;
- (void)innovationAd:(id)a0 clickParams:(id)a1;
- (void)innovationAd:(id)a0 notificationParams:(id)a1;
- (id)contentViewOfInnovationAd;
- (void)loadInnovationAdWithUrl:(id)a0;
- (id)innovationAdAppInfo;
- (void)innovationAd:(id)a0 appendGlobalProps:(id)a1;
- (void)innovationAdTrackWithContext:(id)a0;
- (void)loadLynxConfig;
- (void)loadInnovation;
- (id)createCreativeViewWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (id)appInfo;

@end
