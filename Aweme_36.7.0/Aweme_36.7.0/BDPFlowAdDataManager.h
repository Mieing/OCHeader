@class NSString, NSMutableDictionary;

@interface BDPFlowAdDataManager : NSObject <BDPFlowAdService>

@property (retain, nonatomic) NSMutableDictionary *unitIdToAdMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)preloadFlowAdWithUniqueId:(id)a0 adUnitId:(id)a1 extra:(id)a2 from:(id)a3 callback:(id /* block */)a4;
- (void)readAdDataWithUniqueId:(id)a0 adUnitId:(id)a1 sync:(BOOL)a2 callback:(id /* block */)a3;
- (void)loadAd:(id)a0 complete:(id /* block */)a1;
- (long long)getRitForFlowAD:(BOOL)a0;
- (void)p_trackFlowAdRequest:(id)a0;
- (void)p_trackFlowAdRequestResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
