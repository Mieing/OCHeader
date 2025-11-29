@class NSString, NSDictionary, IESECEcLiveJumpByClickPromotionModel, NSNumber;

@interface IESECEcLiveJumpByClickParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *roomUniqueKey;
@property (copy, nonatomic) NSString *ecomEntranceForm;
@property (copy, nonatomic) NSNumber *sourcePage;
@property (copy, nonatomic) NSDictionary *entranceInfo;
@property (copy, nonatomic) NSDictionary *addToCartEntranceInfo;
@property (retain, nonatomic) IESECEcLiveJumpByClickPromotionModel *promotion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
