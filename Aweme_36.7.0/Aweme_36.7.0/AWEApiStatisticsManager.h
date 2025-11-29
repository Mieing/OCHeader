@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEApiStatisticsManager : NSObject <TSPKSubscriber> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainStorage;

- (void)__storageRecordForFetchingIDFA;
- (void)__storageRecordFetchingApiWithKey:(id)a0;
- (void)__createRecordListStorageWithKey:(id)a0;
- (void)__updateRecordListStorageWithKey:(id)a0;
- (void)__createRecordListStorageWithKey:(id)a0 date:(id)a1 times:(long long)a2;
- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;

@end
