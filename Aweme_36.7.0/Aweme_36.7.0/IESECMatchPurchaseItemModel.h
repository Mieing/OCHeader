@class NSString, IESECURLModel, IESECGoodsPrice, IESECMatchPurchaseSkuModel;

@interface IESECMatchPurchaseItemModel : MTLModel <MTLJSONSerializing, IGListDiffable>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) IESECURLModel *coverImage;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isHigtLight;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (nonatomic) unsigned long long productStatus;
@property (retain, nonatomic) NSString *imageTips;
@property (copy, nonatomic) NSString *urlSchema;
@property (nonatomic) unsigned long long skuType;
@property (retain, nonatomic) IESECMatchPurchaseSkuModel *specInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
