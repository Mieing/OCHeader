@class IESECShopMemberCardCouponInfo, IESECURLModel, NSString, IESECShopMemberTextLabelItem;

@interface IESECShopMemberButton : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *bgImg;
@property (retain, nonatomic) IESECShopMemberTextLabelItem *text;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *couponMetaId;
@property (retain, nonatomic) IESECShopMemberCardCouponInfo *couponInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
