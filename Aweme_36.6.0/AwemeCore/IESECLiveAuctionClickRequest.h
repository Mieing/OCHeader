@class NSString;

@interface IESECLiveAuctionClickRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *auctionID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long reportType;

- (id)buildParams;
- (void).cxx_destruct;

@end
