@class NSString, NSMutableArray, NSMutableDictionary;
@protocol WCFinderRefuseLikeListModelDelegate;

@interface WCFinderRefuseLikeListModel : NSObject <WCFinderContactExt>

@property (retain, nonatomic) NSMutableArray *contactArray;
@property (retain, nonatomic) NSMutableArray *currentModTypeInfoList;
@property (retain, nonatomic) NSMutableArray *failModTypeInfoList;
@property (retain, nonatomic) NSMutableDictionary *retryModTypeInfoDic;
@property (weak, nonatomic) id<WCFinderRefuseLikeListModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (void)friendsLikeOptionWithContact:(id)a0 objectID:(id)a1 optionType:(unsigned long long)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)friendsLikeOptionWithObjectID:(id)a0 addContacts:(id)a1 deleteContacts:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)editBlockFriendLikeWithObjectID:(id)a0 addContacts:(id)a1 removeContacts:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)checkQueueWithObjectID:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)handleModContactResponse:(id)a0 objectID:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)convertWCFinderContactToCContact:(id)a0;
- (unsigned long long)getSelectedOnceNumber;
- (unsigned long long)getMaxBatchOnceNumber;
- (void).cxx_destruct;

@end
