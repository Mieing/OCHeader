@class NSString, NSMutableArray;

@interface ChatbotDeviceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int cpuCore;
@property (nonatomic) unsigned int cpuFlag;
@property (nonatomic) unsigned int cpuFreq;
@property (retain, nonatomic) NSString *cpuModel;
@property (retain, nonatomic) NSString *ilinkPath;
@property (retain, nonatomic) NSString *deviceIncremental;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceDisplay;
@property (retain, nonatomic) NSString *deviceRelease;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (retain, nonatomic) NSString *modelDir;
@property (retain, nonatomic) NSMutableArray *deviceId;
@property (retain, nonatomic) NSString *ownerVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *ispInfo;
@property (nonatomic) unsigned int simType;
@property (nonatomic) unsigned int videoHardware;

+ (void)initialize;

@end
