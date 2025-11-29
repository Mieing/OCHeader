@class TIMXRecentConvInfoPullerDouYin, NSString, TIMXSDKInstance, NSObject;
@protocol TIMXPullerMessageHandlerDelegateProtocol, TIMXPullerCommandMessageKVUtilityProtocol, OS_dispatch_queue;

@interface TIMXPullerCommandMessageHandler : NSObject <TIMXPullerCommandMessageKVUtilityDelegate, TIMXPullerMessageHandlerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXPullerMessageHandlerDelegateProtocol> delegate;
@property (retain, nonatomic) id<TIMXPullerCommandMessageKVUtilityProtocol> kvUtility;
@property (retain, nonatomic) TIMXRecentConvInfoPullerDouYin *recentConvPuller;
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
- (BOOL)versionValid;
- (void)handleEndInitRequestSuccess:(id)a0;
- (void)handleEndInitRequestFail;
- (void)didEndOfflinePullWithError:(id)a0;
- (id)versionKeyValueDict;
- (BOOL)hasVersionWithType:(long long)a0;
- (void)migrateOldVersion;
- (BOOL)shouldPullOfflineWithContext:(id)a0;
- (long long)recentConvPullerVersion;
- (BOOL)recentConvPullerHasInited;
- (void)updateRecentConvPullerVersion:(long long)a0 forced:(BOOL)a1;
- (void)updateIndexV2:(long long)a0 save:(BOOL)a1;
- (void)updateCommandMessageIndex:(id)a0 pullOfflineContext:(id)a1 oldIndex:(long long)a2 save:(BOOL)a3;
- (BOOL)hasMoreWithOfflineMessages:(id)a0;
- (void)migrateIndexForSec;
- (void)fallbackCommandIndex:(id)a0;
- (void).cxx_destruct;

@end
