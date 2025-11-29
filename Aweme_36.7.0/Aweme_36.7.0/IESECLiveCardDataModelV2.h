@class IESECLivePopRoomInfoV2, NSNumber, IESECLiveCardPromotionModel;

@interface IESECLiveCardDataModelV2 : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveCardPromotionModel *promotionModel;
@property (retain, nonatomic) IESECLivePopRoomInfoV2 *roomInfoV2;
@property (retain, nonatomic) NSNumber *logicalClock;

+ (id)promotionModelJSONTransformer;
+ (id)roomInfoV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
