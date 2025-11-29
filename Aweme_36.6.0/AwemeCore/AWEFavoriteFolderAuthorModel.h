@class NSString, AWEURLModel;

@interface AWEFavoriteFolderAuthorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatarURL;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
