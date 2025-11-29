@class NSString, IESLLPOIContentItemModel, NSArray;

@interface IESLLPOISpuInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *spuID;
@property (copy, nonatomic) NSString *spuName;
@property (retain, nonatomic) IESLLPOIContentItemModel *poiContent;
@property (retain, nonatomic) NSArray *coverUrlList;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *targetURL;
@property (copy, nonatomic) NSString *supplierID;
@property (copy, nonatomic) NSArray *iconServiceTypeList;

+ (id)iconServiceTypeListJSONTransformer;
+ (id)coverUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
