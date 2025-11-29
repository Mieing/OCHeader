@class NSObject, BDKiteCollectConfig;
@protocol OS_dispatch_queue;

@interface BDKiteCollectManager : NSObject

@property (retain) BDKiteCollectConfig *localConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *collectQueue;

+ (id)sharedInstance;

- (void)delayIfNeeded:(id)a0;
- (void)handleCollect:(id)a0;
- (id)asyncComputeData;
- (void)kiteWithParam:(id)a0 retryCount:(unsigned long long)a1 startTime:(long long)a2 scene:(id)a3;
- (void)saveRemoteConfigIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)generateHeader;

@end
