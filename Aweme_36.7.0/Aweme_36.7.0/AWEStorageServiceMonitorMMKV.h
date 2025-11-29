@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStorageServiceMonitorMMKV : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL shouldRecord;
@property (nonatomic) long long mmkvThreshold;

+ (id)sharedInstance;

- (void)setMMKVRecordMaxCount:(long long)a0;
- (void)reportIfExceedThreshold;
- (void)recordMMKV:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitor;

@end
