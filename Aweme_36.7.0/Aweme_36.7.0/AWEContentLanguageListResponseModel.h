@class NSArray;

@interface AWEContentLanguageListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *contentLanguageList;

+ (id)contentLanguageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
