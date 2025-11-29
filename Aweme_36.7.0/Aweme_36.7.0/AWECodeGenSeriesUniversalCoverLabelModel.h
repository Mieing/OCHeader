@class NSString;

@interface AWECodeGenSeriesUniversalCoverLabelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
