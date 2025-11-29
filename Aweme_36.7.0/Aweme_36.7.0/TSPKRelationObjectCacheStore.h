@class NSString, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKRelationObjectCacheStore : NSObject <TSPKStore>

@property (retain, nonatomic) id<TSPKLock> lock;
@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) double lastCleanTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateReportTime:(double)a0;
- (double)getCleanTime;
- (void)getStoreDataWithInstanceAddress:(id)a0 completion:(id /* block */)a1;
- (id)objectOfUid:(id)a0;
- (void)scheduleACleanPlan;
- (void)cleanRecords;
- (void)cleanRecordsInArray:(id)a0;
- (void)saveEventData:(id)a0 completion:(id /* block */)a1;
- (void)getStoreDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
