@class NSRecursiveLock, NSString, NSOperationQueue, BDXBridgeEventSubscriber, NSObject;
@protocol OS_dispatch_queue;

@interface CJPayRRPUploadManager : NSObject <CJPayRRPService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rrpAccessQueue;
@property (retain, nonatomic) NSOperationQueue *uploadRRPQueue;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedManager;

@end
