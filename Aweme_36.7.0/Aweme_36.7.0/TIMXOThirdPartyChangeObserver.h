@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;
@protocol TIMXMessageStoreProtocol;

@interface TIMXOThirdPartyChangeObserver : NSObject <TIMXStartUpTaskProtocol, TIMXMessageStoreChangesObserver, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;
+ (int)convertPriorityToMulticastPriority:(long long)a0;

- (void)userDidLogin:(id)a0;
- (id)addWeakChangeObserver:(id)a0 queue:(id)a1 priority:(long long)a2;
- (void)onThirdPartyConversationsCreated:(id)a0 context:(id)a1;
- (void)onThirdPartyConversationsUpdated:(id)a0 context:(id)a1;
- (void)onThirdPartyConversationsDeleted:(id)a0 context:(id)a1;
- (void)userDidLogout:(id)a0;
- (void)dbInitFinishNotification:(id)a0;
- (void)userWillLogout:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;
- (void)removeChangeObserverWithIdentifier:(id)a0;

@end
