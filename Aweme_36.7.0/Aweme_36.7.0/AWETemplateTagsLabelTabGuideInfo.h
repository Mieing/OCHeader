@class NSString;

@interface AWETemplateTagsLabelTabGuideInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *replaceLabelText;
@property (copy, nonatomic) NSString *clientExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
