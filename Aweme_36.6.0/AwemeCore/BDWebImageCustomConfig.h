@class BDWebImageTTNetConfig, NSString, BDWebImageDecodeConfig, BDWebImageAllowLogTypeConfig, BDWebImageAdaptiveConfig, BDWebImageLoadConfig, BDWebImageCacheConfig, NSDictionary, BDWebImageHTTPDNSConfig, BDWebImageLargeImageConfig;

@interface BDWebImageCustomConfig : NSObject <BDModelCustom>

@property (retain, nonatomic) BDWebImageAllowLogTypeConfig *allowLogTypeConfig;
@property (retain, nonatomic) BDWebImageHTTPDNSConfig *httpDNSConfig;
@property (retain, nonatomic) BDWebImageTTNetConfig *ttnetConfig;
@property (nonatomic) BOOL enabledSR;
@property (nonatomic) BOOL enabledHeifDecode;
@property (nonatomic) BOOL enabledHeifEncode;
@property (retain, nonatomic) BDWebImageAdaptiveConfig *adaptiveConfig;
@property (retain, nonatomic) BDWebImageCacheConfig *cacheConfig;
@property (retain, nonatomic) BDWebImageDecodeConfig *decodeConfig;
@property (retain, nonatomic) BDWebImageLoadConfig *loadConfig;
@property (retain, nonatomic) BDWebImageLargeImageConfig *largeImageConfig;
@property (readonly, copy, nonatomic) NSDictionary *ttNetSettingDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
