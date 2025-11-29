@class NSString, TIMXSDKInstance, NSObject;
@protocol TIMXPullerMessageKVUtilityProtocol, TIMXCurrentUserCredentialProtocol, TIMXPullerMessageHandlerDelegateProtocol, OS_dispatch_queue;

@interface TIMXPullerMessageHandler : NSObject <TIMXElapsedTimeMonitorDelegate, TIMXNewMessageStoreEventProtocol, TIMXPullerMessageHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXPullerMessageHandlerDelegateProtocol> delegate;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (retain, nonatomic) id<TIMXPullerMessageKVUtilityProtocol> kvUtility;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (nonatomic) BOOL isFirstReceivePushMsg;
@property long long notifyConversationVersionNotContinuousCount;
@property (nonatomic) BOOL lastOfflinePullHasMore;
@property (nonatomic) BOOL blockIndexSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createMessageHandlerWithContext:(id)a0;

- (void)messageStore:(id)a0 internalNotifyWithUpdate:(id)a1 context:(id)a2;
- (void)elapsedTimeMonitor:(id)a0 taskExecutionTimeout:(id)a1 elapsedTime:(double)a2;
- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2 delegate:(id)a3;
- (long long)chainType;
- (void)setUpKV;
- (BOOL)handleOfflineMessages:(id)a0 pullOfflineContext:(id)a1 completion:(id /* block */)a2;
- (void)updatePullVersion:(id)a0 context:(id)a1 direction:(unsigned long long)a2;
- (void)handleNewMessage:(id)a0 inbox:(int)a1 context:(id)a2;
- (BOOL)versionValid;
- (void)handleEndInitRequestSuccess:(id)a0;
- (void)handleEndInitRequestFail;
- (void)didEndOfflinePullWithError:(id)a0;
- (id)versionKeyValueDict;
- (BOOL)hasVersionWithType:(long long)a0;
- (void)migrateOldVersion;
- (BOOL)isInVersionRange:(long long)a0;
- (id)pullRangeFromDirection:(unsigned long long)a0;
- (void)filterConvsWhereAllMsgsAreInvisible:(id)a0;
- (BOOL)shouldPullOfflineWithContext:(id)a0;
- (void)migrateIndexForSec;
- (void)realHandleNewMessage:(id)a0 inbox:(int)a1 context:(id)a2;
- (void)updateConversationBadgeCount:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkNotifyVersionContinues:(id)a0 inbox:(int)a1;
- (void)updateConversationVersionWithNotify:(id)a0 inbox:(int)a1;
- (BOOL)hasMoreWithOfflineMessages:(id)a0 pullOfflineContext:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
