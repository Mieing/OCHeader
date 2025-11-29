@class NSArray, NSMutableSet;

@interface AWEIMConversationPuller : NSObject

@property (nonatomic) long long nextCursor;
@property (nonatomic) long long lastSortOrder;
@property (retain, nonatomic) NSArray *shareModelList;
@property (retain, nonatomic) NSMutableSet *conversationIdSetM;

- (id)chatDataManager;
- (void)fetchAllGroupShareModelByLocalDBWithPageCount:(long long)a0 completion:(id /* block */)a1;
- (void)fetchAllGroupShareModelByLocalDBWithCompletion:(id /* block */)a0;
- (void)fetchAllGroupShareModelWithCompletion:(id /* block */)a0;
- (void)removeShareModelWithConversationID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
