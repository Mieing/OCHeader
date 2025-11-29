@class NSString, AWETemplateStaticLabelInfoModel;

@interface AWETemplateTagsModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) long long priority;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long builtInTemplateType;
@property (retain, nonatomic) AWETemplateStaticLabelInfoModel *staticLabel;
@property (copy, nonatomic) NSString *labelGroup;
@property (copy, nonatomic) NSString *labelType;

+ (id)staticLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
