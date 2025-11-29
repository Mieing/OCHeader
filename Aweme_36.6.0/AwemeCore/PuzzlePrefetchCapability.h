@class NSArray, NSString, PuzzlePrefetchCacheManager;
@protocol PuzzleLogServiceProtocol;

@interface PuzzlePrefetchCapability : NSObject <IESPrefetchCapability>

@property (retain, nonatomic) PuzzlePrefetchCacheManager *storage;
@property (retain, nonatomic) id<PuzzleLogServiceProtocol> logService;
@property (copy, nonatomic) NSArray *disableMonitorServices;
@property (copy, nonatomic) NSString *businessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registCapabilityForBusiness:(id)a0;

- (void)monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)networkForRequest:(id)a0 completion:(id /* block */)a1;
- (id)customCacheStorage;
- (id)envVariables;
- (id)customConfigForProject:(id)a0 version:(id)a1;
- (void)trackPrefetchErrorEvent:(id)a0 category:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)initWithBusiness:(id)a0;

@end
