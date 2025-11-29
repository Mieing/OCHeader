@class NSString;

@interface AWEExternalMusicModel : AWEBaseApiModel <AWEExternalMusicModelProtocol>

@property (copy, nonatomic) NSString *thirdPlatformName;
@property (copy, nonatomic) NSString *universalLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *externalMusicKey;
@property (copy, nonatomic) NSString *thirdPlatformMusicID;
@property (copy, nonatomic) NSString *thirdPlatformName;
@property (copy, nonatomic) NSString *externalURL;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *deepLink;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
