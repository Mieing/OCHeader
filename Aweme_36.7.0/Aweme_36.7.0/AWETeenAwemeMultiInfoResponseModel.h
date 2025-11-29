@class NSArray;

@interface AWETeenAwemeMultiInfoResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
