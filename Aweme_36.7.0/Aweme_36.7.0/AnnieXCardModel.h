@class PuzzleContext, IESHYHybridContainerConfig, NSString, NSArray, NSLock, BDXSchemaParam, AnnieXMonitorConfig, NSMutableArray;
@protocol AnnieXLynxKitModelProtocol, BDXBridgeProviderProtocol, AnnieXWebKitModelProtocol, BDXBridgeNetworkServiceProtocol;

@interface AnnieXCardModel : MTLModel <AnnieXLiveCardModelProtocol, AnnieXCardModelProtocol> {
    NSLock *_lock;
}

@property (retain, nonatomic) PuzzleContext *puzzleContext;
@property (retain, nonatomic) IESHYHybridContainerConfig *iesContainerConfig;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *engineType;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *originURL;
@property (retain, nonatomic) BDXSchemaParam *schemaParams;
@property (nonatomic) long long viewContentMode;
@property (retain, nonatomic) id<AnnieXLynxKitModelProtocol> lynxKitParams;
@property (retain, nonatomic) id<AnnieXWebKitModelProtocol> webKitParams;
@property (retain, nonatomic) AnnieXMonitorConfig *monitorConfig;
@property (copy, nonatomic) NSArray *preloadPathsForForbiddenRouter;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (nonatomic) BOOL asycLoadCardViewInCurrentThread;
@property (weak, nonatomic) id<BDXBridgeProviderProtocol> bridgeProvider;
@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *engineType;
@property (retain, nonatomic) NSString *originURL;
@property (retain, nonatomic) BDXSchemaParam *schemaParams;
@property (nonatomic) long long viewContentMode;
@property (retain, nonatomic) id<AnnieXLynxKitModelProtocol> lynxKitParams;
@property (retain, nonatomic) id<AnnieXWebKitModelProtocol> webKitParams;
@property (retain, nonatomic) AnnieXMonitorConfig *monitorConfig;
@property (copy, nonatomic) NSArray *preloadPathsForForbiddenRouter;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (nonatomic) BOOL asycLoadCardViewInCurrentThread;
@property (weak, nonatomic) id<BDXBridgeProviderProtocol> bridgeProvider;
@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)kitParams;
- (void)notifyPreserveDataDidChangeByFront:(id)a0 mainThread:(BOOL)a1;
- (void)notifyPreserveDataDidChangeByNative:(id)a0;
- (void)weakAddCardModelDelegate:(id)a0;
- (void)strongAddCardModelDelegate:(id)a0;
- (void)removeCardModelDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
