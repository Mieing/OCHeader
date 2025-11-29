@class NSString, NSNumber;

@interface IESECLiveGoodsProductModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *goodsID;
@property (nonatomic) long long channelID;
@property (nonatomic) long long channelType;
@property (copy, nonatomic) NSString *detailURL;
@property (copy, nonatomic) NSNumber *shopID;
@property (copy, nonatomic) NSNumber *itemType;
@property (nonatomic) long long auctionType;
@property (copy, nonatomic) NSString *bizIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
