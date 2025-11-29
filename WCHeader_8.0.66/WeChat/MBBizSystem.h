@class NSMutableDictionary, MagicBrushService;
@protocol IMBPluginProxy, IMBPublicServiceProxy;

@interface MBBizSystem : NSObject

@property (retain, nonatomic) NSMutableDictionary *bizDict;
@property (retain, nonatomic) NSMutableDictionary *publicServiceRC;
@property (retain, nonatomic) NSMutableDictionary *serviceToBizMessages;
@property (retain, nonatomic) NSMutableDictionary *bizToServiceMessages;
@property (retain, nonatomic) NSMutableDictionary *psDelayDestroyBlocksDict;
@property (weak, nonatomic) id<IMBPublicServiceProxy> publicServiceProxy;
@property (weak, nonatomic) id<IMBPluginProxy> pluginProxy;
@property (weak, nonatomic) MagicBrushService *service;

- (void)setupPublicServiceCategory;
- (BOOL)bindPublicService:(id)a0 biz:(id)a1;
- (void)unbindPublicService:(id)a0 biz:(id)a1;
- (void)unbindAllPublicServiceForBiz:(id)a0;
- (void)destroyAllBizesForPublicService:(id)a0;
- (void)forceStop:(id)a0;
- (void)postMessage:(id)a0 toPublicService:(id)a1 fromBiz:(id)a2;
- (void)publicService:(id)a0 listenToBiz:(id)a1;
- (void)postMessage:(id)a0 toBiz:(id)a1 fromPublicService:(id)a2;
- (void)biz:(id)a0 listenToPublicService:(id)a1;
- (id)getPublicService:(id)a0 biz:(id)a1;
- (id)init;
- (id)createBiz:(id)a0;
- (id)getBiz:(id)a0;
- (BOOL)injectPlugin:(id)a0 intoBiz:(id)a1;
- (void).cxx_destruct;

@end
