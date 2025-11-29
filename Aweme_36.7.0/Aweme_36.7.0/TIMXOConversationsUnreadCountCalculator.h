@class NSString, NSDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXOConversationUnreadCountCounterCore, TIMXOConversationsUnreadCountCalculatorDelegate;

@interface TIMXOConversationsUnreadCountCalculator : NSObject <TIMXOTotalUnreadCountClient> {
    BOOL _maintainUnreadCount;
    BOOL _unreadCountContainsMutedConversation;
    BOOL _unreadCountContainsHalfMutedConversation;
    BOOL _maintainMentionedCount;
    TIMXSDKInstance *_r;
    id<TIMXOConversationsUnreadCountCalculatorDelegate> _delegate;
    id<TIMXOConversationUnreadCountCounterCore> _counterCore;
}

@property (copy, nonatomic) NSDictionary *appCounterCoreDict;
@property (readonly, nonatomic) long long userIDWhenInit;
@property (nonatomic) BOOL addToIMTotalUnreadCount;
@property (nonatomic) long long boxType;
@property (retain, nonatomic) NSString *logExtra;
@property (retain) NSObject<OS_dispatch_queue> *injectQueue;
@property (retain) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic) BOOL operationQueueLocked;
@property (nonatomic) BOOL ignoreAnyJob;
@property (nonatomic) BOOL isFirstReportUnreadCount;
@property (copy, nonatomic) NSDictionary *appConvMaskDict;
@property (copy, nonatomic) NSDictionary *appConvShouldNotContainMaskDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onConversationsUpdate:(id)a0 context:(id)a1;
- (void)onConversationsRemoveWithID:(id)a0;
- (void)onConversationsUpdateOld:(id)a0 context:(id)a1;
- (void)p_calculateAppsConvUnreadCountAndStorePure:(id)a0;
- (void)p_workAndPushUnreadCountUpdateIfNecessaryWithContext:(id)a0 block:(id /* block */)a1;
- (void)injectInitConversationsOld:(id)a0 context:(id)a1;
- (void)p_calculateAppsConvUnreadCount:(id)a0 isOld:(BOOL)a1;
- (void)injectInitConversations:(id)a0 context:(id)a1;
- (void)p_calculateAppsConvUnreadCountOnDelete:(id)a0;
- (long long)calculationUserID;
- (void)finishFirstOfflinePulling;
- (void)injectInitPureUnreadInfo:(id)a0;
- (void)injectInitConversationsOld:(id)a0;
- (void)injectInitConversations:(id)a0;
- (BOOL)injectFinish;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
