@class NSArray;

@interface ACCNewVideoCoverAIRecommendResult : ACCBaseApiModel

@property (copy, nonatomic) NSArray *coverList;

+ (id)coverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
