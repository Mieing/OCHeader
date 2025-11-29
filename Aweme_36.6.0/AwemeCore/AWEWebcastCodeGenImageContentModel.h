@class NSString;

@interface AWEWebcastCodeGenImageContentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *alternativeText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
