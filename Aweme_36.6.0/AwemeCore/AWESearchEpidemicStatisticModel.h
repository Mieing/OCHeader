@class NSString, NSArray;

@interface AWESearchEpidemicStatisticModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) NSArray *itemModels;

+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
