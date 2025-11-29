@class NSData;

@interface HardDeviceStatusSubRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *deviceType;
@property (retain, nonatomic) NSData *deviceId;
@property (nonatomic) unsigned int opType;

+ (void)initialize;

@end
