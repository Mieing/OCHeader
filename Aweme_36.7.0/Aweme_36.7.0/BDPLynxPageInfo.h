@class NSString, NSDictionary, BDPLynxPageBuilder, BDPThreadSafeArray, BDPUniqueID, LynxBackgroundRuntime;
@protocol BDXViewContainerServiceProtocol;

@interface BDPLynxPageInfo : NSObject <BDPAnniePageInfo>

@property (readonly, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *lynxPages;
@property (retain, nonatomic) BDPLynxPageBuilder *pageCache;
@property (retain, nonatomic) id<BDXViewContainerServiceProtocol> containerService;
@property (copy, nonatomic) BDPThreadSafeArray *lifeCycleArray;
@property (retain, nonatomic) LynxBackgroundRuntime *bgRuntime;
@property (nonatomic) BOOL isEnvReady;
@property (copy, nonatomic) NSString *groupName;

- (BOOL)addSubscribeHandler:(id)a0 params:(id)a1;
- (BOOL)isAnniePath:(id)a0 isFp:(BOOL)a1;
- (void)prefetchStartPageResource:(id)a0 startPage:(id)a1;
- (id)annieViewWithPage:(id)a0 lynxSchema:(id)a1 needCache:(BOOL)a2;
- (BOOL)isAnniePath:(id)a0;
- (id)annieViewWithPage:(id)a0;
- (id)annieViewWithPage:(id)a0 lynxSchema:(id)a1;
- (id)fetchAllSubscribeHandler;
- (id)initWithLynxPages:(id)a0 uniqueID:(id)a1 startPage:(id)a2 bgRuntimeModel:(id)a3;
- (void)updateBgRuntimeModel:(id)a0;
- (void).cxx_destruct;

@end
