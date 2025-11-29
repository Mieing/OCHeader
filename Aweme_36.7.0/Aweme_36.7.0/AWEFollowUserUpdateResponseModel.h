@class NSArray;

@interface AWEFollowUserUpdateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
