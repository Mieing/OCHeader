@class IESECGoodsDetailButtonExtraModel, NSString, IESECGoodsDetailButtonTipsModel, IESECGoodsDetailButtonLinksModel;

@interface IESECGoodsDetailButtonModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailButtonLinksModel *links;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subText;
@property (nonatomic) long long couponAmount;
@property (nonatomic) unsigned long long virtualGoodsOrderState;
@property (nonatomic) unsigned long long goodsSpecialType;
@property (nonatomic) BOOL isInvalidVerison;
@property (copy, nonatomic) NSString *versionToast;
@property (retain, nonatomic) IESECGoodsDetailButtonTipsModel *buttonTips;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) IESECGoodsDetailButtonExtraModel *extra;
@property (nonatomic) BOOL grayButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
