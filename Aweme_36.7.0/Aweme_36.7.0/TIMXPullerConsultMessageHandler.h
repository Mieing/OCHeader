@class NSString, TIMXSDKInstance, NSObject;
@protocol TIMXPullerMessageHandlerDelegateProtocol, TIMXPullerConsultMessageKVUtilityProtocol, OS_dispatch_queue;

@interface TIMXPullerConsultMessageHandler : NSObject <TIMXPullerMessageHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXPullerMessageHandlerDelegateProtocol> delegate;
@property (retain, nonatomic) id<TIMXPullerConsultMessageKVUtilityProtocol> kvUtility;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (nonatomic) BOOL lastOfflinePullHasMore;
@property (nonatomic) BOOL blockIndexSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createMessageHandlerWithContext:(id)a0;

- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2 delegate:(id)a3;
- (long long)chainType;
- (void)setUpKV;
- (BOOL)handleOfflineMessages:(id)a0 pullOfflineContext:(id)a1 completion:(id /* block */)a2;
- (void)updatePullVersion:(id)a0 context:(id)a1 direction:(unsigned long long)a2;
- (void)handleNewMessage:(id)a0 inbox:(int)a1 context:(id)a2;
- (BOOL)checkNotifyVersionContinues:(id)a0 inboxType:(int)a1;
- (BOOL)shouldPullOfflineWithContext:(id)a0;
- (BOOL)hasMoreWithOfflineMessages:(id)a0;
- (void)migrateIndexForSec;
- (void)updateConversationVersionWithNotify:(id)a0 inboxType:(int)a1;
- (void).cxx_destruct;

@end
