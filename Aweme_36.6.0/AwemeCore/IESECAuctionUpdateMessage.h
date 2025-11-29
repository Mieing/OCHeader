@class NSString, IESECAuctionUpdateMessage_EndTimeRefreshInfo;

@interface IESECAuctionUpdateMessage : GPBMessage

@property (nonatomic) long long productId;
@property (nonatomic) long long auctionId;
@property (nonatomic) int actionType;
@property (copy, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) IESECAuctionUpdateMessage_EndTimeRefreshInfo *endTimeRefreshInfo;
@property (nonatomic) BOOL hasEndTimeRefreshInfo;
@property (copy, nonatomic) NSString *priceRefreshInfo;

+ (id)descriptor;

@end
