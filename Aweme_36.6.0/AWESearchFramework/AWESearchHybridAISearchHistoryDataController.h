@class NSString, UIView;
@protocol AWESearchAIGCServiceProtocol, AWESearchAIGCHistoryManagerProtocol, AWESearchHybridAISearchHistoryDataControllerDelegate, SearchCachalotViewInterface;

@interface AWESearchHybridAISearchHistoryDataController : NSObject <AWESearchAIGCHistoryManagerDelegate>

@property (retain, nonatomic) id<AWESearchAIGCHistoryManagerProtocol> historyManager;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL havePre;
@property (nonatomic) BOOL haveNext;
@property (copy, nonatomic) NSString *scrollObserverToken;
@property (weak, nonatomic) id<AWESearchHybridAISearchHistoryDataControllerDelegate> delegate;
@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;
@property (weak, nonatomic) UIView<SearchCachalotViewInterface> *cachalotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)modelWithViewModel:(id)a0;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)startContentSizeObserver;
- (id)getCacheableRootNodeWithRawJson:(id)a0;
- (id)firstVisibleVM;
- (void)lockCachalotViewContentOffset;
- (void)addBidToAttachmentModelsInViewModels:(id)a0;
- (id)generateCustomLynxDataForViewModel:(id)a0 inViewModels:(id)a1;
- (id)getCustomLynxDataWithViewModel:(id)a0 isRealTime:(BOOL)a1 isLastRound:(BOOL)a2;
- (id)getCustomLynxDataWithViewModel:(id)a0 isRealTime:(BOOL)a1 isLastRound:(BOOL)a2 isKeepAlive:(BOOL)a3;
- (void)handleLynxViewModelsWithRootNode:(id)a0 completon:(id /* block */)a1;
- (void)firstLoadDataWithConversationID:(id)a0 searchID:(id)a1 extra:(id)a2 timeStamp:(double)a3 replaceRoot:(BOOL)a4 enableFailureToast:(BOOL)a5 complete:(id /* block */)a6;
- (void)replaceRemoteHistoryNode:(id)a0 beginInsertCallback:(id /* block */)a1 endInsertCallback:(id /* block */)a2;
- (void)appendRemoteHistoryNode:(id)a0 beginInsertCallback:(id /* block */)a1 endInsertCallback:(id /* block */)a2;
- (void)fetchHistoryWithConversationId:(id)a0 messageTimestamp:(double)a1 direction:(long long)a2 extra:(id)a3 completion:(id /* block */)a4;
- (double)findTimeStampWithDirection:(long long)a0;
- (void)stopContentSizeObserver;
- (void)insertRemoteHistoryNode:(id)a0 beginInsertCallback:(id /* block */)a1 endInsertCallback:(id /* block */)a2;
- (void)updateHaveMoreToConversationWithDirection:(long long)a0;
- (void)updateHaveMoreFromConversationWithDirection:(long long)a0;
- (void)recordRoundInfoWithList:(id)a0 isFirstLoad:(BOOL)a1;
- (void)fetchFeedExtraInfoWithDictionary:(id)a0;
- (BOOL)bindCopilotInfoFromAIBusinessVM:(id)a0 toQueryCard:(id)a1;
- (void)firstLoadDataWithConversationID:(id)a0 searchID:(id)a1 extra:(id)a2 timeStamp:(double)a3 complete:(id /* block */)a4;
- (void)loadNextDataComplete:(id /* block */)a0;
- (void)loadPreviousDataComplete:(id /* block */)a0;
- (void)newQuery:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)create;

@end
