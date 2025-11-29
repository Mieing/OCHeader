@class NSArray;

@interface BDPAppRefererConfig : NSObject

@property (nonatomic) long long imagePolicy;
@property (copy, nonatomic) NSArray *imageUrls;
@property (copy, nonatomic) NSArray *imageDomains;
@property (nonatomic) long long canvasImagePolicy;
@property (copy, nonatomic) NSArray *canvasImageUrls;
@property (copy, nonatomic) NSArray *canvasImageDomains;
@property (nonatomic) long long videoPolicy;
@property (copy, nonatomic) NSArray *videoUrls;
@property (copy, nonatomic) NSArray *videoDomains;
@property (nonatomic) long long livePlayerPolicy;
@property (copy, nonatomic) NSArray *livePlayerUrls;
@property (copy, nonatomic) NSArray *livePlayerDomains;
@property (nonatomic) long long previewImagePolicy;
@property (copy, nonatomic) NSArray *previewImageUrls;
@property (copy, nonatomic) NSArray *previewImageDomains;
@property (nonatomic) long long innerAudioContextPolicy;
@property (copy, nonatomic) NSArray *innerAudioContextUrls;
@property (copy, nonatomic) NSArray *innerAudioContextDomains;
@property (nonatomic) long long backgroundAudioContextPolicy;
@property (copy, nonatomic) NSArray *backgroundAudioContextUrls;
@property (copy, nonatomic) NSArray *backgroundAudioContextDomains;

+ (void)bootstrapLaunch;
+ (id)configFromDic:(id)a0;
+ (id)defaultConfig;

- (long long)getPolicyFromString:(id)a0;
- (id)urlListFrom:(long long)a0;
- (id)domainListFrom:(long long)a0;
- (long long)policyFrom:(long long)a0;
- (long long)defaultPolicy:(long long)a0;
- (long long)reversePolicyFromPolicy:(long long)a0;
- (void)updateConfigWithAppID:(id)a0;
- (long long)policyWith:(id)a0 andFrom:(long long)a1;
- (void).cxx_destruct;

@end
