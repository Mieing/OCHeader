@class AWEPLVSectionPaddingModel, NSNumber, NSString;

@interface AWEPLVBannerSectionConfig : AWEBaseApiModel

@property (retain, nonatomic) AWEPLVSectionPaddingModel *padding;
@property (copy, nonatomic) NSNumber *cornerRadius;
@property (copy, nonatomic) NSString *sectionName;

+ (id)paddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
