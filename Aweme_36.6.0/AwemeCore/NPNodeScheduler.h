@class NPSchedulingRequestInfo, NSMutableDictionary, NSDictionary, NSOperationQueue, NSError, NSObject;
@protocol OS_dispatch_source, NPNodeSchedulerRequestDelegate;

@interface NPNodeScheduler : NSObject

@property unsigned long long state;
@property (retain) NSError *error;
@property BOOL shouldRequestSpecificHosts;
@property (retain, nonatomic) NPSchedulingRequestInfo *schedulingRequestInfo;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) unsigned long long networkStatus;
@property (readonly, nonatomic) NSDictionary *currentNodes;
@property (copy, nonatomic) id /* block */ appInfoRequest;
@property (weak, nonatomic) id<NPNodeSchedulerRequestDelegate> requestDelegate;

+ (id)sharedScheduler;

- (id)nodeWithHost:(id)a0;
- (id)excuteWithCommand:(id)a0 userInfo:(id)a1;
- (void)updateCurrentNetworkStatus:(unsigned long long)a0;
- (id)strategyRelatedToNetworkWithUserInfo:(id)a0;
- (void)updateSchedulingResultWithCurrentRequestInfo;
- (void)updateCurrentNetworkStatus:(unsigned long long)a0 withCacheFlushed:(BOOL)a1;
- (void)updateCurrentNodesInfoWithIPMap:(id)a0 schedulingInfo:(id)a1 withNotification:(BOOL)a2;
- (void)updateCurrentNodesDnsSetting:(id)a0;
- (void)performRequestWithURL:(id)a0 method:(id)a1 customRequestSerilizer:(Class)a2 params:(id)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
- (void)_updateSchedulingResultWithCurrentRequestInfo;
- (void)requestSpecificHostsWithCompletion:(id /* block */)a0;
- (id)IPMapWithNodes:(id)a0;
- (id)IPMapWithHosts:(id)a0;
- (void)updateCurrentNodesInfoWithIPMap:(id)a0 schedulingInfo:(id)a1;
- (id)currentSchedulingRequestInfo;
- (void)updateCurrentSchedulingRequestInfo:(id)a0;
- (void)stopTimer;
- (void)flush;
- (void).cxx_destruct;
- (void)_stopTimer;
- (id)init;
- (void)stop;
- (void)_setupTimer;
- (void)start;
- (void)setupTimer;
- (void)didReceiveError:(id)a0;

@end
