@class NSString;

@interface IESECSKUBizContextParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *liveRoomId;
@property (nonatomic) BOOL isGroupBuy;
@property (copy, nonatomic) NSString *orderUrl;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long hotSaleType;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *nGroupBuyToken;
@property (copy, nonatomic) NSString *bizIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
