@class NSLock, NSMutableDictionary, NSDate;

@interface IESGurdSyncResourceRequestManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSDate *lastCleanDate;
@property (nonatomic) double throttleThreshold;
@property (retain, nonatomic) NSMutableDictionary *throttleInfos;

+ (id)sharedInstance;

- (id)createRequestWithParams:(id)a0 completion:(id /* block */)a1 error:(id *)a2;
- (void)cleanThrottleInfosWhenNeeded;
- (id)createRequestWithUpdateParams:(id)a0 requestType:(long long)a1 completion:(id /* block */)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)init;

@end
