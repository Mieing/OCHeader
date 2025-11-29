@class NSString;

@interface AWEExternalSongModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *externalURL;
@property (copy, nonatomic) NSString *thirdPlatformName;
@property (copy, nonatomic) NSString *thirdPlatformMusicID;
@property (copy, nonatomic) NSString *externalMusicKey;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *deepLink;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
