@class NSString, AWEURLModel;

@interface AWEShareUserModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) AWEURLModel *avatarURL;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
