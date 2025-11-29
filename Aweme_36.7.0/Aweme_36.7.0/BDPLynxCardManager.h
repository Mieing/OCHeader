@class NSString, BDPThreadSafeDictionary;
@protocol BDXViewContainerServiceProtocol;

@interface BDPLynxCardManager : NSObject <BDPLynxCardService, BDPWarmBootMessage, BDPNativeAppSubscribeDispatchMessage, BDPAppPreloadMessage>

@property (copy, nonatomic) BDPThreadSafeDictionary *lynxCardDict;
@property (copy, nonatomic) BDPThreadSafeDictionary *bgRuntimeDic;
@property (retain, nonatomic) id<BDXViewContainerServiceProtocol> containerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)dispatchTMA2LynxViewEvent:(id)a0 uniqueID:(id)a1 pagePath:(id)a2 dest:(unsigned long long)a3 data:(id)a4;
- (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
- (id)bdp_lynxCardWithModel:(id)a0 uniqueID:(id)a1 stateDelegate:(id)a2;
- (id)componentWithEmbedId:(id)a0 uniqueID:(id)a1;
- (id)componentWithContainerId:(id)a0 uniqueID:(id)a1;
- (void)removeComponentWithEmbedId:(id)a0 uniqueID:(id)a1;
- (void)preloadLynxComponents:(id)a0 enablePrefetch:(BOOL)a1 uniqueID:(id)a2;
- (id)annieViewWithModel:(id)a0 uniqueID:(id)a1;
- (void)addLynxConponent:(id)a0 component:(id)a1;
- (id)_componentWithEmbedId:(id)a0 uniqueID:(id)a1;
- (id)_componentWithContainerId:(id)a0 uniqueID:(id)a1;
- (void)_removeComponentWithEmbedId:(id)a0 uniqueID:(id)a1;
- (id)urlByAppendTMAMessage:(id)a0 uniqueID:(id)a1;
- (id)createLynxBackgroundRuntimeWithUniqueId:(id)a0;
- (void).cxx_destruct;
- (void)setupManager;

@end
