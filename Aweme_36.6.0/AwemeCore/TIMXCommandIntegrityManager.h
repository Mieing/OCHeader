@class NSMutableArray, NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject, TIMXCommandMessageHandler;
@protocol OS_dispatch_queue;

@interface TIMXCommandIntegrityManager : NSObject <TIMXCommandMessageHandleEventProtocol>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) TIMXCommandMessageHandler *handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cmdIntegrityQueue;
@property (retain, nonatomic) TIMXGCDTimer *cmdIntegrityTimer;
@property (retain, nonatomic) TIMXGCDTimer *cmdReceivedIntegrityTimer;
@property (copy, nonatomic) NSString *cmdIntegrityRangeReceivedIndexKey;
@property (copy, nonatomic) NSString *cmdIntegrityCheckedReceivedIndexKey;
@property (retain, nonatomic) NSMutableArray *cmdIndexReceivedRanges;
@property (nonatomic) long long previousCheckedReceivedIndex;
@property (copy, nonatomic) NSString *cmdIntegrityRangeIndexKey;
@property (copy, nonatomic) NSString *cmdIntegrityCheckedIndexKey;
@property (retain, nonatomic) NSMutableArray *cmdIndexRanges;
@property (nonatomic) long long previousCheckedIndex;
@property (nonatomic) BOOL appHasEnterBackground;
@property (nonatomic) BOOL isRedeeming;
@property (nonatomic) BOOL cmdChecked;
@property (nonatomic) BOOL cmdReceivedChecked;
@property (nonatomic) long long userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetCheckTimer;
- (void)willHandleCommandMessageWithContext:(id)a0;
- (void)didHandleCommandMessageWithContext:(id)a0 handleResult:(unsigned long long)a1 userInfo:(id)a2;
- (void)setupAllKeys;
- (void)p_syncCmdIndexFromKV;
- (void)startRedeemLeakCommandsIfNeed;
- (void)resetCheckReceivedTimer;
- (void)p_syncCmdReceivedIndexFromKV;
- (BOOL)p_checkRangeValidation:(id)a0;
- (void)resetAllReceivedRanges;
- (BOOL)isUserValid;
- (BOOL)p_resultForHandleCommandContext:(id)a0 userInfo:(id)a1 resultType:(unsigned long long)a2;
- (void)recordCmd:(id)a0 messageSubtype:(long long)a1 result:(BOOL)a2;
- (void)recordCmdReceived:(id)a0 messageSubtype:(long long)a1;
- (id)p_rangesFormat:(id)a0;
- (void)saveCmdIndexReceivedRange;
- (void)recordReceivedCommandMessageIndex:(long long)a0;
- (id)p_recordCmdIndex:(long long)a0 mergeToRanges:(id)a1;
- (void)checkCmdReceivedContinuesIfNeed;
- (long long)p_supposeCountWithRanges:(id)a0 previouseCheckIndex:(long long)a1;
- (long long)p_leakCountWithRanges:(id)a0 previousCheckIndex:(long long)a1 supposeTotal:(long long)a2 rangeStringDesc:(id)a3;
- (void)resetAllRecordedRanges;
- (void)saveCmdIndexRange;
- (void)recordExecutedCommandMessageIndex:(long long)a0;
- (void)checkCmdContinuesIfNeed;
- (id)p_getFirstEmptyRange:(id)a0;
- (void)handleFetchedLeakMsgs:(id)a0 next:(long long)a1 error:(id)a2;
- (void)fetchLeakMsgsWithRange:(id)a0 completion:(id /* block */)a1;
- (void)aggregateMessagesAndRedeem:(id)a0;
- (BOOL)commandSupportRedemptionWithType:(int)a0 commandType:(long long)a1;
- (unsigned long long)redemptionTypeWithMessageType:(int)a0 commandType:(long long)a1;
- (void)redeemAggregatedMsgs:(id)a0 indexesDic:(id)a1;
- (void)redeemCommandMsg:(id)a0 completion:(id /* block */)a1;
- (id)initWithRootObject:(id)a0 userID:(long long)a1;
- (void)clearOriginRecords;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;

@end
