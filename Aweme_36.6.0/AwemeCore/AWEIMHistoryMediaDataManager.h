@class AWEIMMessageConversation, NSString, NSArray, AWEIMNewMessageDataController, NSMutableArray;
@protocol AWEIMHistoryMediaDataManagerDelegate;

@interface AWEIMHistoryMediaDataManager : NSObject <AWEIMMessageDataEventProtocol>

@property (nonatomic) BOOL isFetching;
@property (nonatomic) int fetchTimesLimit;
@property (nonatomic) long long targetCreateTime;
@property (retain, nonatomic) NSString *targetMessageId;
@property (retain, nonatomic) NSArray *mediaMessageTypes;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) id /* block */ fetchHistoryCompletion;
@property (retain, nonatomic) NSMutableArray *mediaModels;
@property (readonly, nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEIMNewMessageDataController *messageDataController;
@property (weak, nonatomic) id<AWEIMHistoryMediaDataManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)onLoadHistoryCompleteWith:(id)a0;
- (void)fetchHistoryMessageListWithRequestTimes:(unsigned long long)a0 messageCount:(long long)a1;
- (long long)p_getMessageCountWithMessageGroupArray:(id)a0;
- (void)setTargetMessageIdWithGroupsIfNeed:(id)a0;
- (id)handleMessageGroups:(id)a0;
- (void)handleHistoryMediaMessageList:(id)a0;
- (void)setTargetMessageIdWithMessageListIfNeed:(id)a0;
- (id)initWithConversation:(id)a0 mediaMessageTypes:(id)a1;
- (void)fetchHistoryMessageListStrategy1:(id /* block */)a0;
- (id)getFetchedHistoryMessageList;
- (void)refreshFeedMediaModels:(id)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
