@class NSMutableDictionary, MMBaseSessionStorage;
@protocol GameLifeConversationCellDataSourceDelegate;

@interface GameLifeConversationCellDataSource : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessionId2ViewModelDic;
@property (weak, nonatomic) id<GameLifeConversationCellDataSourceDelegate> delegate;
@property (nonatomic) unsigned long long currentCount;
@property (retain, nonatomic) MMBaseSessionStorage *conversationStorage;

- (id)initWithConversationStorage:(id)a0;
- (void)loadInitial;
- (void)reload;
- (void)checkConversationContactInitial:(long long)a0;
- (void)loadNextPage;
- (void)loadInitialAllUnreadAndMinCnt:(long long)a0;
- (long long)conversationCount;
- (id)conversationAtOffset:(long long)a0 limit:(long long)a1;
- (id)conversationAtIndex:(long long)a0;
- (id)conversationWithSessionId:(id)a0;
- (id)conversationCellViewModelAtIndex:(long long)a0;
- (void)openChatAtIndex:(long long)a0 fromNav:(id)a1;
- (void).cxx_destruct;

@end
