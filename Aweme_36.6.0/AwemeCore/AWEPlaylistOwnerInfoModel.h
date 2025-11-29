@class NSString;

@interface AWEPlaylistOwnerInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *sec_uid;
@property (copy, nonatomic) NSString *nickname;

+ (id)avatarLargerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithMiniLunaModel:(id)a0;
- (void).cxx_destruct;

@end
