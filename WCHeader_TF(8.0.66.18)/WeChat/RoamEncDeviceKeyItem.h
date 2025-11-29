@class NSString;

@interface RoamEncDeviceKeyItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *deviceEnMsgListKey;

+ (void)initialize;

@end
