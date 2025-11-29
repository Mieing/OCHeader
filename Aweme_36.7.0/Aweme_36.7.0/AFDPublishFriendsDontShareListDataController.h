@class NSString, NSArray;

@interface AFDPublishFriendsDontShareListDataController : AWEListDataController

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSArray *dontShareUserList;
@property (copy, nonatomic) NSArray *relativeList;

- (id)initWithAwemeID:(id)a0;
- (void)p_setupDataWithResponseModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
