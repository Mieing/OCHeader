@class NSArray;

@interface AFDPlayRemoteAwemeListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
