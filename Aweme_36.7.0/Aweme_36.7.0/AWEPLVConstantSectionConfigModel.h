@class NSString, AWEPLVSectionBackgrounColorModel, AWEPLVSectionPaddingModel, NSNumber;

@interface AWEPLVConstantSectionConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sectionName;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *sectionPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *contentPadding;
@property (retain, nonatomic) AWEPLVSectionPaddingModel *headerPadding;
@property (retain, nonatomic) AWEPLVSectionBackgrounColorModel *backgroundColor;
@property (retain, nonatomic) NSNumber *maxLines;
@property (retain, nonatomic) NSNumber *rowPadding;
@property (retain, nonatomic) NSNumber *linePadding;
@property (nonatomic) BOOL dynamicSpacing;
@property (nonatomic) BOOL navigationBarPadding;

+ (id)backgroundColorJSONTransformer;
+ (id)sectionPaddingJSONTransformer;
+ (id)contentPaddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
