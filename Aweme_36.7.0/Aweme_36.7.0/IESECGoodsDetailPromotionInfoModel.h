@class NSString, IESECURLModel, IESECGoodsDetailPromotionGeneralModel;

@interface IESECGoodsDetailPromotionInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long promotionType;
@property (retain, nonatomic) IESECURLModel *promotionPicUrl;
@property (retain, nonatomic) IESECGoodsDetailPromotionGeneralModel *promotionGeneral;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
