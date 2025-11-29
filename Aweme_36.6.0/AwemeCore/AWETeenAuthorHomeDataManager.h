@class AWEUserModel;

@interface AWETeenAuthorHomeDataManager : AWEListDataController

@property (nonatomic) long long cursor;
@property (retain, nonatomic) AWEUserModel *user;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)loadAuthorWorkCompletion:(id /* block */)a0;
- (void)loadAuthorProfileCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
