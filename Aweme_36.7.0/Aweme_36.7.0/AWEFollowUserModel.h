@class NSString, NSArray;

@interface AWEFollowUserModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *avatarList;

+ (id)avatarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
