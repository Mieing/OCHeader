@class NSString, NSData;

@interface WxaGameServerSampleConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL shouldDoSample;
@property (retain, nonatomic) NSString *keyEventSampleConfig;
@property (retain, nonatomic) NSData *pubKey;
@property (nonatomic) unsigned int sampleNetworkBits;
@property (nonatomic) unsigned int imageSampleLevel;
@property (nonatomic) unsigned int imageQuality;

+ (void)initialize;

@end
