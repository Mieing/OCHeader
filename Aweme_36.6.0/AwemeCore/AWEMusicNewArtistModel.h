@class NSString, AWENewURLModel;

@interface AWEMusicNewArtistModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) AWENewURLModel *avatarURL;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *artistName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
