@class HMDThreadSafeArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUGUnifiedSystemAbilityEventListener : NSObject <AWEUGEventListenerDelegate> {
    NSMutableArray *_allHandlers;
}

@property (copy, nonatomic) HMDThreadSafeArray *eventList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *allHandlers;
@property (nonatomic) BOOL enableSyncFix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)reportEvent:(id)a0 params:(id)a1;
- (void)buildHandlers;
- (void)dispatchEvent:(id)a0 params:(id)a1;
- (id)allSubAbilityEventLists;
- (void).cxx_destruct;
- (id)init;

@end
