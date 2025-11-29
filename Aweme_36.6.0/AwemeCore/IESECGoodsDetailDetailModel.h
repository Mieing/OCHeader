@class IESECGoodsPropertyModel, NSArray, NSString, IESECURLModel, IESECGoodsDetailDetailTagCard, IESECGoodsCombiningPropertyModel, IESECGoodsDetailDetailTopComponent;

@interface IESECGoodsDetailDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *goodsPropertyGroups;
@property (retain, nonatomic) IESECGoodsPropertyModel *goodsProperty;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *imageItemArray;
@property (copy, nonatomic) NSString *propertyPageSchema;
@property (retain, nonatomic) IESECGoodsCombiningPropertyModel *combiningProperty;
@property (copy, nonatomic) NSArray *detailConfig;
@property (copy, nonatomic) NSString *detailHTML;
@property (retain, nonatomic) IESECGoodsDetailDetailTopComponent *topComponent;
@property (readonly, nonatomic) BOOL hasGoodsProperty;
@property (readonly, nonatomic) BOOL goodsPropertyNeedsFold;
@property (readonly, nonatomic) long long goodsPropertyCountWhenFold;
@property (retain, nonatomic) IESECURLModel *titleImage;
@property (retain, nonatomic) IESECGoodsDetailDetailTagCard *tagCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailConfigJSONTransformer;
+ (id)imageItemArrayJSONTransformer;
+ (id)goodsPropertyGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
