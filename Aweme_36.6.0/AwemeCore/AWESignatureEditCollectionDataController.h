@class NSMutableArray, NSString, NSArray, NSObject, NSCache;
@protocol AWECommentSearchManagerProtocol;

@interface AWESignatureEditCollectionDataController : NSObject

@property (copy, nonatomic) NSString *mentionListSearchKeyword;
@property (retain, nonatomic) NSCache *mentionUserSearchManagers;
@property (retain, nonatomic) NSObject<AWECommentSearchManagerProtocol> *mentionUserListDefaultSearchManager;
@property (retain, nonatomic) NSObject<AWECommentSearchManagerProtocol> *mentionUserListCurrentSearchManager;
@property (copy, nonatomic) NSArray *defaultUserArray;
@property (retain, nonatomic) NSMutableArray *mentionDataSource;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL isRequestOnAir;

- (BOOL)isDefaultList;
- (void)searchWithsearchManager:(id)a0 completion:(id /* block */)a1;
- (id)convertUserModelListToEditCollectionData:(id)a0;
- (void)p_reloadDataIfNeeded:(id)a0 error:(id)a1 userList:(id)a2 completion:(id /* block */)a3;
- (BOOL)mentionListHasMore;
- (void)fetchMentionListWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchMentionListLoadMoreWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
