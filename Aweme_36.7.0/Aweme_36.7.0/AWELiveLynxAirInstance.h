@class NSString, NSMutableDictionary, UIView;
@protocol AnnieXContainerBaseProtocol, IESLiveGeckoService, IESLiveLynxAirLifecycleProtocol, AnnieXCardModelProtocol;

@interface AWELiveLynxAirInstance : NSObject <BDXContainerLifecycleProtocol, IESLiveLynxAirInstanceInterface>

@property (weak, nonatomic) id<IESLiveLynxAirLifecycleProtocol> lifecycleDelegate;
@property (retain, nonatomic) id<IESLiveGeckoService> geckoService;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)registerLocalMethod:(id)a0;
- (void)bindData:(id)a0;
- (id)createLynxAirViewWithUrl:(id)a0 data:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 lifecycleDelegate:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
