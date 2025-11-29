@class NSArray;

@interface AWEFeedGeneralLabelModel : AWEBaseApiModel

@property (nonatomic) long long strategyType;
@property (copy, nonatomic) NSArray *candidates;

+ (id)candidatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getTagsModelWithBusinessID:(id)a0;
- (void).cxx_destruct;

@end
