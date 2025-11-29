@class NSString, IESECAuctionAtmosphere, IESECProductRefreshMessage_AuctionInfo_AuctionUser;

@interface IESECProductRefreshMessage_AuctionInfo : GPBMessage

@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *priceLabel;
@property (retain, nonatomic) IESECAuctionAtmosphere *auctionAtmosphere;
@property (nonatomic) BOOL hasAuctionAtmosphere;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) IESECProductRefreshMessage_AuctionInfo_AuctionUser *currentUser;
@property (nonatomic) BOOL hasCurrentUser;

+ (id)descriptor;

@end
