@class NSArray, NSString, NSMutableArray, AWEIMHistoryMediaDataManager;

@interface AWEIMHistoryMediaDisplayDataCenter : NSObject <AWEIMHistoryMediaDataManagerDelegate>

@property (nonatomic) BOOL isLoadNoMoreData;
@property (nonatomic) BOOL isMessageStateReaqueting;
@property (nonatomic) long long insertMediaModelsCount;
@property (nonatomic) long long dataEvent;
@property (retain, nonatomic) AWEIMHistoryMediaDataManager *mediaDataManager;
@property (retain, nonatomic) NSArray *mediaMessageTypes;
@property (retain, nonatomic) NSMutableArray *allMediaModels;
@property (retain, nonatomic) NSArray *requestMediaModels;
@property (nonatomic) unsigned long long vcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)p_fetchHistoryMessageList:(BOOL)a0;
- (void)setupDataCenter;
- (id)getMessageDataControllerWith:(id)a0;
- (void)loadDataAndNotifyDataEvent:(id)a0 isInitFetch:(BOOL)a1 hasMoreData:(BOOL)a2 isLoadFail:(BOOL)a3;
- (void)p_handleHistoryMessageModels:(id)a0 isFetchOver:(BOOL)a1 hasMoreData:(BOOL)a2 isInitFetch:(BOOL)a3;
- (void)p_handleHistoryMessageListV2:(id)a0 completeBlock:(id /* block */)a1;
- (id)filterMediaModels:(id)a0 response:(id)a1;
- (void)fillFeedMediaModel:(id)a0 avaliableAwemeModels:(id)a1;
- (id)filterAvaliableFeedMediaModels:(id)a0 filteredModels:(id)a1 requestMessageList:(id)a2;
- (void)notifyDataEvent:(long long)a0;
- (BOOL)shouldRefreshfeedUnavaliableState:(id)a0;
- (id)initWithMediaMessageTypes:(id)a0;
- (void)fetchHistoryMessageListInit;
- (void)fetchHistoryMessageList;
- (id)p_filterFeedHistoryMessageList:(id)a0;
- (void)p_refreshFeedMediaStateWithNeedReload:(BOOL)a0 feedModels:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
