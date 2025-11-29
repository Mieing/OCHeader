@class NSString, NSArray, IESLLifeURLModel, IESLLPOIServiceSpuEntryModel, NSDictionary, IESLLPOISpuStatInfoModel, IESLLPOISpuCustomerModel, IESLLPOISpuTagModel;

@interface IESLLPOISpuModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *spuID;
@property (nonatomic) unsigned long long spuType;
@property (retain, nonatomic) IESLLPOISpuCustomerModel *customerInfo;
@property (copy, nonatomic) NSString *spuName;
@property (copy, nonatomic) NSArray *imageUrl;
@property (copy, nonatomic) NSArray *saleTags;
@property (nonatomic) long long price;
@property (nonatomic) long long originPrice;
@property (nonatomic) double discount;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *priceSuffix;
@property (retain, nonatomic) IESLLPOIServiceSpuEntryModel *entry;
@property (copy, nonatomic) NSArray *decisionInfoList;
@property (nonatomic) long long stock;
@property (retain, nonatomic) IESLLPOISpuTagModel *imageTag;
@property (retain, nonatomic) IESLLPOISpuStatInfoModel *spuStat;
@property (retain, nonatomic) IESLLifeURLModel *iconUrl;
@property (retain, nonatomic) IESLLifeURLModel *iconLightUrl;
@property (retain, nonatomic) IESLLifeURLModel *spuImgUrl;
@property (copy, nonatomic) NSString *extJson;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageUrlJSONTransformer;
+ (id)saleTagsJSONTransformer;
+ (id)decisionInfoListJSONTransformer;
+ (id)spuStatJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)supplierID;
- (void).cxx_destruct;
- (id)productDescription;

@end
