@class NSArray, AWETemplateStaticLabelStyleModel, NSString;

@interface AWETemplateStaticLabelInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWETemplateStaticLabelStyleModel *style;
@property (copy, nonatomic) NSArray *containers;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *trackInfo;
@property (copy, nonatomic) NSArray *datas;
@property (copy, nonatomic) NSArray *externalEvents;
@property (copy, nonatomic) NSArray *displayStrategies;

+ (id)styleJSONTransformer;
+ (id)actionsJSONTransformer;
+ (id)containersJSONTransformer;
+ (id)datasJSONTransformer;
+ (id)externalEventsJSONTransformer;
+ (id)displayStrategiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
