@class NSString, NSArray;

@interface AWEAdOperationWebFollowMaskDataController : AWEListDataController

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSArray *postAwemeList;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)followStatusChanged:(id)a0;
- (id)initWithUserID:(id)a0;
- (void).cxx_destruct;
- (id)requestURL;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
