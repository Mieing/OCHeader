@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFantaCommerceVVFeatureProvider : AWEFantaAbstractDataCollector <FantaDataCollectorListener, FantaFeatureProvider>

@property (retain, nonatomic) NSMutableArray *commerceVV24hList;
@property (retain, nonatomic) NSMutableArray *commerceVVTodayList;
@property (retain, nonatomic) NSMutableArray *commerceVVSessionList;
@property (retain, nonatomic) NSMutableArray *totalVV24hList;
@property (retain, nonatomic) NSMutableArray *totalVVTodayList;
@property (retain, nonatomic) NSMutableArray *totalVVSessionList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *VVFeatureQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)p_addObserver;
- (void)readDataFromDiskIfNeeded;
- (void)addFeatureToTotalList:(id)a0;
- (void)addFeatureToCommerceList:(id)a0;
- (void)clear24hFeatureListIfNeeded;
- (void)clearTodayFeatureListIfNeeded;
- (id)featureForKey:(id)a0;
- (void)loadCommerceVVFeatureProvider;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;

@end
