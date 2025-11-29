@class NSString, AWEURLModel;

@interface AWEMusicOnboardOwnerModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long type;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
