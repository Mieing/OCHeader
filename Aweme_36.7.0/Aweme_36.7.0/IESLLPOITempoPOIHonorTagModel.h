@class NSString, NSArray, IESLLPOITempoPOIHonorTagSuffixImageModel, IESLLPOITempoPOIHonorTagIconInfoModel, NSNumber;

@interface IESLLPOITempoPOIHonorTagModel : IESLLPOITempoBaseTagModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *contentColor;
@property (copy, nonatomic) NSArray *backgroundColor;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) IESLLPOITempoPOIHonorTagIconInfoModel *iconInfo;
@property (retain, nonatomic) IESLLPOITempoPOIHonorTagSuffixImageModel *suffixImage;
@property (nonatomic) BOOL isWithinName;
@property (retain, nonatomic) NSNumber *contentFontSize;
@property (retain, nonatomic) NSNumber *contentFontWeight;

+ (id)iconInfoJSONTransformer;
+ (id)suffixImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
