@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TIMXInboxPullerGroupManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *rebuildLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasFinishInitAllConversations:(int)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
