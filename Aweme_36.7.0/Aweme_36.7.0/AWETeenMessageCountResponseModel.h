@class NSArray;

@interface AWETeenMessageCountResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *groups;

+ (id)groupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
