@class NSString, IESECServiceProxy, NSMutableDictionary, IESECBlenderContext;
@protocol IESECBlenderLynxPredecodeManager, IESECBlenderPerformance, IESECBlenderXBridgeRegister;

@interface IESECBlenderPreloadLynx : NSObject <BDXContainerLifecycleProtocol, IESECBlenderPreloadLynx>

@property (nonatomic) double mainLynxViewLoadStartTime;
@property (nonatomic) long long mainLynxViewLoadState;
@property (nonatomic) long long waitTemplateBundleLoad;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderXBridgeRegister> *xbrides;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderLynxPredecodeManager> *templateBundleDecodeManager;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPerformance> *performance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *lynxContainerMap;
@property (nonatomic) BOOL hasLocalCache;
@property (weak, nonatomic) IESECBlenderContext *context;

- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (id)bid;
- (void)preloadLynxContainer:(id)a0 forUrl:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withInitialData:(id)a3 withGlobalProps:(id)a4 withLocalCacheKey:(id)a5;
- (void)load:(id)a0 withGlobalProps:(id)a1;
- (void)updateGlobalProps:(id)a0 globalProps:(id)a1;
- (id)localCacheData:(id)a0;
- (id)getGlobalProps:(id)a0 withLocalCacheKey:(id)a1;
- (id)createMainLynx:(id)a0 forUrl:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withInitialData:(id)a3 withGlobalProps:(id)a4 withLocalCacheKey:(id)a5;
- (void)markLoadTemplateType:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
