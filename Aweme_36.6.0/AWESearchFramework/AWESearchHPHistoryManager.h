@class NSArray, AWEStorage, NSString;

@interface AWESearchHPHistoryManager : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSArray *conversations;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEStorage *fileStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (id)fetchHistoryCache;
- (id)getQueryModelWithConversationID:(id)a0 searchID:(id)a1;
- (id)p_uidHistoryUploadResultKey;
- (void)p_deleteMatchedGeneralSearchQuery:(id)a0 inConversation:(id)a1;
- (void)p_trackHistoryDeleteWithStartTime:(double)a0 deleteModel:(id)a1 response:(id)a2 error:(id)a3;
- (id)p_searchConversations:(id)a0 beforeTime:(long long)a1 maxNum:(long long)a2;
- (void)p_trackHistoryGetWithStartTime:(double)a0 enterTS:(long long)a1 maxNum:(long long)a2 isCache:(BOOL)a3 response:(id)a4 error:(id)a5;
- (id)p_readFromDisk;
- (void)fetchHistoryWithEnterTS:(long long)a0 maxNum:(long long)a1 completion:(id /* block */)a2;
- (void)uploadLocalHistoryWithCompletion:(id /* block */)a0;
- (id)p_linearSearchConversations:(id)a0 beforeTime:(long long)a1 maxNum:(long long)a2;
- (id)p_binarySearchConversations:(id)a0 beforeTime:(long long)a1 maxNum:(long long)a2;
- (BOOL)p_generaSearchQuery:(id)a0 equals:(id)a1;
- (void)p_writeToDisk:(id)a0;
- (void)reanswerHistory:(id)a0 withHistory:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)deleteAllHistory;
- (void)addHistory:(id)a0;
- (void)deleteHistory:(id)a0;

@end
