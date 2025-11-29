@class IESECProductRefreshMessage_ProductInfo, IESECProductRefreshMessage_RequestInfo, IESECProductRefreshMessage_AuctionInfo, IESECHotAtmosphere, IESECAuctionAtmosphere;

@interface IESECProductRefreshMessage : GPBMessage

@property (nonatomic) long long promotionId;
@property (nonatomic) long long productId;
@property (nonatomic) long long channelType;
@property (nonatomic) long long channelId;
@property (nonatomic) long long updateTs;
@property (nonatomic) int actionType;
@property (retain, nonatomic) IESECProductRefreshMessage_RequestInfo *requestInfo;
@property (nonatomic) BOOL hasRequestInfo;
@property (retain, nonatomic) IESECProductRefreshMessage_ProductInfo *productInfo;
@property (nonatomic) BOOL hasProductInfo;
@property (retain, nonatomic) IESECHotAtmosphere *hotAtmosphere;
@property (nonatomic) BOOL hasHotAtmosphere;
@property (retain, nonatomic) IESECProductRefreshMessage_AuctionInfo *auctionInfo;
@property (nonatomic) BOOL hasAuctionInfo;
@property (retain, nonatomic) IESECAuctionAtmosphere *auctionAtmosphere;
@property (nonatomic) BOOL hasAuctionAtmosphere;

+ (id)descriptor;

@end
