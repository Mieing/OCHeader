@class NSString, NSDictionary, AWETeenSearchKeywordModel, NSNumber;

@interface AWETeenSearchResultUserDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) AWETeenSearchKeywordModel *keyWord;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadSearchUserWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
