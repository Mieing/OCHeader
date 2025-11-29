@class NSString;

@interface BrandFansBlackListViewModel : NSObject

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *bizuin;
@property (copy, nonatomic) NSString *buffer;

- (id)initWithBizuin:(id)a0;
- (void)loadDataWithCompletion:(id /* block */)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)handleBlackListResponse:(id)a0;
- (void)getBlackListWithBuffer:(id)a0 completion:(id /* block */)a1;
- (void)unblockUser:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
