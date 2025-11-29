@class NSString, IRISExternalHandler, NSDictionary, IRISDataStorageManager, IRISThrottlter, NSObject;
@protocol OS_dispatch_queue, IRISContext, IRISDataMechanism;

@interface IRISDataUploader : NSObject {
    NSObject<OS_dispatch_queue> *executeQueue;
}

@property double baseInterval;
@property (retain, nonatomic) IRISThrottlter *throttlter;
@property BOOL suspended;
@property (copy) NSString *configuredEndpoint;
@property (weak, nonatomic) id<IRISContext> context;
@property long long priority;
@property (weak) id<IRISDataMechanism> dataMechanism;
@property (readonly) long long interval;
@property (readonly) NSString *endpoint;
@property (retain, nonatomic) IRISExternalHandler *external;
@property (nonatomic) BOOL realtime;
@property (retain, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *specifyEndpoint;
@property (weak, nonatomic) IRISDataStorageManager *storageManager;
@property (nonatomic) double tickTime;

- (void)applyInterval:(double)a0;
- (BOOL)requestIfNeed:(id)a0 packetIndex:(unsigned long long)a1;
- (void)storageVaccumIfNeed;
- (id)_queryOptions:(id)a0;
- (void)triggerUpload:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)applyThrottlterConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (BOOL)isAvailable;
- (void)resume;
- (void)onError:(id)a0;

@end
