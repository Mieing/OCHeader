@class NSString, NSArray, AWEPOIServiceSpuEntryModel, AWEPOISpuCustomerModel, AWEPOISpuTagModel, AWEURLModel, NSDictionary, AWEPOISpuStatInfoModel;

@interface AWEPOISpuModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *spuID;
@property (nonatomic) unsigned long long spuType;
@property (retain, nonatomic) AWEPOISpuCustomerModel *customerInfo;
@property (copy, nonatomic) NSString *spuName;
@property (copy, nonatomic) NSArray *imageUrl;
@property (copy, nonatomic) NSArray *saleTags;
@property (nonatomic) long long price;
@property (nonatomic) long long originPrice;
@property (nonatomic) double discount;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *priceSuffix;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *entry;
@property (copy, nonatomic) NSArray *decisionInfoList;
@property (nonatomic) long long stock;
@property (retain, nonatomic) AWEPOISpuTagModel *imageTag;
@property (retain, nonatomic) AWEPOISpuStatInfoModel *spuStat;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEURLModel *iconLightUrl;
@property (retain, nonatomic) AWEURLModel *spuImgUrl;
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
