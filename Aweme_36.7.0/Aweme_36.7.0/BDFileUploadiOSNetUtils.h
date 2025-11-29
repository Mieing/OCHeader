@class NSObject;
@protocol OS_dispatch_queue;

@interface BDFileUploadiOSNetUtils : NSObject {
    NSObject<OS_dispatch_queue> *_networkQueue;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic) BOOL scheduleing;
@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;

+ (id)shareInstance;

- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
