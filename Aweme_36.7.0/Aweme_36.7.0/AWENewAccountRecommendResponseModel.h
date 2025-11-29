@class NSArray;

@interface AWENewAccountRecommendResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
