@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDImageCacheMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic) long long allCount;
@property (nonatomic) BOOL monitorEnable;
@property (nonatomic) long long trackInterval;

- (void)onRecordType:(unsigned long long)a0 bizTag:(id)a1;
- (void)trackRecursively;
- (void).cxx_destruct;
- (id)init;
- (void)trackData;

@end
