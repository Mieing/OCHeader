@class IESECLigoContext, IESECComponentManager, NSString;
@protocol IESECLigoLynxService;

@interface IESECLigoManager : NSObject <IESECLigoComponentsHandler>

@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (retain, nonatomic) id<IESECLigoLynxService> ligoLynxManager;
@property (retain, nonatomic) IESECComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didPageVisibilityChange:(BOOL)a0;
- (void)parentPrepareForReuse;
- (id)allLoadedComponents;
- (void)registerLocalRegionName:(id)a0 componentLoadBlock:(id /* block */)a1 unloadBlock:(id /* block */)a2;
- (id)loadComponentWithRouter:(id)a0 data:(id)a1 localRegionName:(id)a2;
- (id)componentByClass:(Class)a0;
- (id)initWithLigoContext:(id)a0 ligoLynxManager:(id)a1;
- (void)updateLigoContext:(id)a0;
- (void)loadComponentWithModel:(id)a0 localRegionName:(id)a1;
- (id)initWithLigoContext:(id)a0 componentManager:(id)a1 ligoLynxManager:(id)a2;
- (void)registerLigoRouter:(id)a0 creator:(id /* block */)a1;
- (void)clearComponentsWithRegionName:(id)a0;
- (id)getComponentsForProtocol:(id)a0;
- (id)getLigoComponentWithLocalRegionName:(id)a0;
- (id)getComponentForProtocol:(id)a0;
- (void)clearLigoComponentsDic;
- (void)trackEventName:(id)a0 params:(id)a1 componentModel:(id)a2;
- (void)trackAndLogForLigoLoadFail:(id)a0 componentModel:(id)a1;
- (id)basicTrackParamsWithComponentModel:(id)a0;
- (void)logEventName:(id)a0 params:(id)a1 componentModel:(id)a2;
- (void)registerLigoRouter:(id)a0 toClass:(Class)a1;
- (void).cxx_destruct;

@end
