@class NSString, NSDictionary, AWETeenSearchKeywordModel, NSArray, NSNumber;
@protocol AWEHttpTask;

@interface AWETeenSearchResultAlbumDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *count;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) AWETeenSearchKeywordModel *keyWord;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSArray *placeholderAlbumList;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (copy, nonatomic) NSString *emptyPageTitle;
@property (copy, nonatomic) NSString *emptyPageDetail;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)trackEventIfNeeded:(long long)a0 param:(id)a1 reponse:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
