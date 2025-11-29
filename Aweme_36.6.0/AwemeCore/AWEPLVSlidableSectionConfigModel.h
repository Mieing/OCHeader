@class NSString, AWEPLVSectionPaddingModel, AWEPLVSectionBackgrounColorModel;

@interface AWEPLVSlidableSectionConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sectionName;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *sectionPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *contentPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *headerPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *scrollViewPadding;
@property (retain, nonatomic) AWEPLVSectionBackgrounColorModel *backgroundColor;
@property (nonatomic) BOOL dynamicSpacing;

+ (id)backgroundColorJSONTransformer;
+ (id)sectionPaddingJSONTransformer;
+ (id)contentPaddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
