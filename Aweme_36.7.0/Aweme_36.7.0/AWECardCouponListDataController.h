@class NSNumber, NSString;

@interface AWECardCouponListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasRedeemed;
@property (copy, nonatomic) NSString *redeemedURL;
@property (nonatomic) unsigned long long filterStatus;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
