@class NSArray;

@interface AWEStartupPopupsModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *popupsInfos;

+ (id)popupsInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
