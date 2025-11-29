@class NSArray;

@interface AWEBatManIdInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *batManInfos;

+ (id)batManInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
