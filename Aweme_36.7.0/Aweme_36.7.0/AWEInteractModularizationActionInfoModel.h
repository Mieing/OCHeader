@class NSArray;

@interface AWEInteractModularizationActionInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *actionList;

+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
