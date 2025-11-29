@class NSString;

@interface AWECodeGenMarketingExposureInfoModel : AWEBaseDataModel

@property (nonatomic) int styleType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long productId;
@property (copy, nonatomic) NSString *productIdStr;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
