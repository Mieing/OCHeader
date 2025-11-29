@class NSString;

@interface AWECutSameGamePlayHelper : NSObject <ACCCutSameGamePlayConfigFetcherProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicLightWaveConfig;
+ (id)stopmotionConfigWithAlgorithm:(id)a0;
+ (id)configs;

@end
