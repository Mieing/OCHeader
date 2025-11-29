@class NSString, NSDictionary, AWETeenSearchKeywordModel, NSNumber, UIViewController;
@protocol AWEHttpTask;

@interface AWETeenSearchResultVideoDataController : AWEListDataController

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) AWETeenSearchKeywordModel *keyWord;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (weak, nonatomic) UIViewController *refViewController;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSString *emptyPageTitle;
@property (copy, nonatomic) NSString *emptyPageDetail;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)getExpectedSizeInfo;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)trackEventIfNeeded:(long long)a0 param:(id)a1 reponse:(id)a2 error:(id)a3;
- (void)p_addSearchTrack:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
