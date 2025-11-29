@class NSString, NSDictionary, NSNumber;

@interface IESECLiveGoodsAddToCardRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSDictionary *skuParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSNumber *channelType;

- (id)buildParams;
- (void).cxx_destruct;

@end
