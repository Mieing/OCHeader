@class NSString, NSDictionary, AWESearchUserPostDataResponse;

@interface AWESearchUserPostDataController : AWEListDataController

@property (retain, nonatomic) AWESearchUserPostDataResponse *response;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSDictionary *commonParams;
@property (readonly, nonatomic) NSDictionary *refreshParams;
@property (readonly, nonatomic) NSDictionary *loadMoreParams;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)calculateFilteredDataSource;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
