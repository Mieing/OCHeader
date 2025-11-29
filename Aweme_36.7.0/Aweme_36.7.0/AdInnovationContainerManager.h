@class LynxView, AdInnovationManager, BDARifleView, NSString, UIView, BDALokiComponent;
@protocol AdInnovationEventReporterProtocol, AdInnovationContainerManagerDelegate;

@interface AdInnovationContainerManager : NSObject <BDALokiComponentDelegate, AdInnovationContainerProtocol, AdInnovationEventReporterProtocol>

@property (retain, nonatomic) AdInnovationManager *innovationAd;
@property (retain, nonatomic) BDALokiComponent *lokiComponent;
@property (retain, nonatomic) BDARifleView *lokiRifleView;
@property (retain, nonatomic) LynxView *lynxView;
@property (copy, nonatomic) NSString *jsonStr;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AdInnovationContainerManagerDelegate> delegate;
@property (weak, nonatomic) id<AdInnovationEventReporterProtocol> reporter;
@property (copy, nonatomic) id /* block */ layoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (void)jsbRegister:(id)a0 registerHandlerBlock:(id /* block */)a1 forJSMethod:(id)a2;
- (void)jsbRegister:(id)a0 fireEvent:(id)a1 params:(id)a2;
- (void)updateWithJson:(id)a0;
- (void)lokiStartLoad:(id)a0;
- (void)lokiRenderFinishComponent:(id)a0;
- (void)lokiJSRuntimeReady:(id)a0;
- (void)lokiShowFinish:(id)a0;
- (void)lokiComponent:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)updatePreloadJSPath:(id)a0;
- (void)lokiComponent:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)lokiComponent:(id)a0 didFetchedResourceModel:(id)a1 error:(id)a2;
- (void)lokiLoadUrlSuccess:(id)a0;
- (void)lokiComponent:(id)a0 didRecieveError:(id)a1;
- (void)lokiDowngrade:(id)a0 errorMsg:(id)a1 type:(long long)a2;
- (void)updateLokiModel:(id)a0;
- (id)buildGlobalProps;
- (void)containerAppear;
- (void)containerDisAppear;
- (void)viewPositionChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewTagName:(id)a1;
- (void)registerSafeAreaList:(id)a0;
- (void)innovationAdCloseContainer;
- (void)innovationAd:(id)a0 clickParams:(id)a1;
- (void)innovationAd:(id)a0 notificationParams:(id)a1;
- (void)innovationAd:(id)a0 hiddenLeftContainer:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innovationAd:(id)a0 viewFrameWithName:(id)a1;
- (void)innovationAdRenderSuccess;
- (id)contentViewOfInnovationAd;
- (void)loadInnovationAdWithUrl:(id)a0;
- (id)innovationAdAppInfo;
- (void)innovationAd:(id)a0 appendGlobalProps:(id)a1;
- (void)innovationAdTrackWithContext:(id)a0;
- (id)initWithJson:(id)a0 containerView:(id)a1 delegate:(id)a2 reporter:(id)a3;
- (void)loadInnovationAdWithLayout:(id /* block */)a0;
- (void)destory;
- (void).cxx_destruct;

@end
