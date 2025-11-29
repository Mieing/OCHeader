@class NSArray;

@interface AWEFollowGroupResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *systemGroup;
@property (retain, nonatomic) NSArray *dynamicGroup;
@property (retain, nonatomic) NSArray *customGroup;

+ (id)systemGroupJSONTransformer;
+ (id)customGroupJSONTransformer;
+ (id)dynamicGroupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
