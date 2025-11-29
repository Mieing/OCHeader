@class NSString;

@interface ExtDeviceControlRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int lockDevice;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
