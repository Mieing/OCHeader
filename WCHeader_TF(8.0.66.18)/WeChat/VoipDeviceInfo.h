@class NSString, NSMutableArray;

@interface VoipDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *verRelease;
@property (retain, nonatomic) NSString *verMinor;
@property (nonatomic) unsigned int cpuFlag;
@property (nonatomic) unsigned int codecInfoCnt;
@property (retain, nonatomic) NSMutableArray *codecInfo;

+ (void)initialize;

@end
