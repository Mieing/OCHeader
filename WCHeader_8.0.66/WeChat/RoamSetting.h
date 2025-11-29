@class NSMutableArray;

@interface RoamSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned long long globalRoamSwitch;
@property (retain, nonatomic) NSMutableArray *contactRoamSetting;
@property (nonatomic) unsigned long long enableTimeMs;
@property (nonatomic) unsigned long long globalEnableRoamDataVersion;

+ (void)initialize;

@end
