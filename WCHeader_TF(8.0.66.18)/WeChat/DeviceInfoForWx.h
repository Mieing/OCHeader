@class NSString, NSMutableArray, MMIotDeviceExtInfo;

@interface DeviceInfoForWx : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceIconUrl;
@property (retain, nonatomic) NSMutableArray *msgTypeList;
@property (nonatomic) unsigned int deviceType;
@property (retain, nonatomic) MMIotDeviceExtInfo *extInfo;

+ (void)initialize;

@end
