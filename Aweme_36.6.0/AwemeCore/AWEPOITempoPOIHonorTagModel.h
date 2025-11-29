@class AWEPOITempoPOIHonorTagSuffixImageModel, NSString, NSArray, NSNumber, AWEPOITempoPOIHonorTagIconInfoModel;

@interface AWEPOITempoPOIHonorTagModel : AWEPOITempoBaseTagModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *contentColor;
@property (copy, nonatomic) NSArray *backgroundColor;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) AWEPOITempoPOIHonorTagIconInfoModel *iconInfo;
@property (retain, nonatomic) AWEPOITempoPOIHonorTagSuffixImageModel *suffixImage;
@property (nonatomic) BOOL isWithinName;
@property (retain, nonatomic) NSNumber *contentFontSize;
@property (retain, nonatomic) NSNumber *contentFontWeight;

+ (id)iconInfoJSONTransformer;
+ (id)suffixImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
