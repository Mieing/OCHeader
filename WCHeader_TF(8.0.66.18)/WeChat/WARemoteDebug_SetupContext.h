@class NSString, WARemoteDebug_RegisterInterface, WARemoteDebug_DeviceInfo;

@interface WARemoteDebug_SetupContext : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_RegisterInterface *registerInterface;
@property (retain, nonatomic) WARemoteDebug_DeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *configureJs;
@property (retain, nonatomic) NSString *publicJsMd5;
@property (retain, nonatomic) NSString *threeJsMd5;
@property (nonatomic) unsigned int supportCompressAlgo;

+ (void)initialize;

@end
