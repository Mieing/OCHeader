@class NSString, NSMutableDictionary, NSMutableSet, TIMXSDKInstance, NSMutableArray;
@protocol TIMXConversationModelProtocol;

@interface TIMXOMessageReadReceipt : NSObject <TIMXMessageStoreChangesObserver> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<TIMXConversationModelProtocol> conversation;
@property (retain, nonatomic) NSMutableDictionary *readReceiptItems;
@property (retain, nonatomic) NSMutableDictionary *messageIndexOrderMap;
@property (retain, nonatomic) NSMutableDictionary *lastResult;
@property (nonatomic) long long reloadCount;
@property (retain, nonatomic) NSMutableSet *activeTokens;
@property (nonatomic) BOOL needReloadLoadMinIndex;
@property (nonatomic) BOOL isFlushing;
@property (nonatomic) double lastFetchTimestamp;
@property (retain, nonatomic) NSMutableArray *checkedConvArr;
@property (nonatomic) BOOL isHaveMinIndexRequestInDelayTask;
@property (nonatomic) double minIndexFetchFrequencyInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelReloadReadReceiptWithToken:(id)a0;
- (id)reloadReadReceiptForMessage:(id)a0 syncFromServer:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithRootObject:(id)a0 conversationID:(id)a1;
- (void)onMessagesCreatedV2:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onConversationsUpdated:(id)a0 context:(id)a1;
- (void)reloadReadReceiptItemsFromDatabase;
- (void)updateReceiptItemsWithMinIndexes:(id)a0;
- (void)fetchMinIndexOfParticipantsWithCompletion:(id /* block */)a0;
- (void)setNeedFlushData;
- (void)updateReadIndex:(long long)a0 andReadOrder:(long long)a1 ofParticipant:(long long)a2;
- (void)p_fetchMinIndexTimerAfterConversationUpdate;
- (void)__reloadReadReceiptForMessage:(id)a0 syncFromServer:(BOOL)a1 withToken:(id)a2 completion:(id /* block */)a3;
- (void)updateReceiptItemsWithReadIndexes:(id)a0;
- (void)calculateResultForMessage:(id)a0 finishedParticipantIDs:(id *)a1 expectedParticipantIDs:(id *)a2 useCache:(BOOL)a3 isConvChecked:(BOOL)a4;
- (void)fetchReadIndexOfParticipantsWithCompletion:(id /* block */)a0;
- (void)onMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void).cxx_destruct;

@end
