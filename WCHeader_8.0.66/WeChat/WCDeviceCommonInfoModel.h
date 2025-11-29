@class NSString, WCDeviceSysFileInfo;

@interface WCDeviceCommonInfoModel : NSObject

@property (retain, nonatomic) NSString *bootSecTime;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *machine;
@property (retain, nonatomic) NSString *carrierInfo;
@property (retain, nonatomic) NSString *physicalMemory;
@property (retain, nonatomic) NSString *disk;
@property (retain, nonatomic) NSString *sysFileTime;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *timeZone;
@property (retain, nonatomic) NSString *ua;
@property (retain, nonatomic) WCDeviceSysFileInfo *mcMetaFileInfo;
@property (retain, nonatomic) NSString *tnmId;
@property (retain, nonatomic) NSString *deviceInitTime;

- (void).cxx_destruct;

@end
