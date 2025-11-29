@class NSString;

@interface WxpayTestEnvInfo : WXPBGeneratedMessage

@property (nonatomic) int environmentId;
@property (nonatomic) int sceneId;
@property (nonatomic) int callstackId;
@property (retain, nonatomic) NSString *extensionData;

+ (void)initialize;

@end
