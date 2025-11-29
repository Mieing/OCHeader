@class NSString;

@interface BackupStartGeneralInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *systemName;
@property (retain, nonatomic) NSString *systemVersion;
@property (nonatomic) unsigned int wechatVersion;
@property (nonatomic) unsigned long long deviceFreeSpace;

+ (void)initialize;

@end
