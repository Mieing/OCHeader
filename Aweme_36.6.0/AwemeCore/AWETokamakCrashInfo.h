@class NSString;

@interface AWETokamakCrashInfo : NSObject

@property (nonatomic) unsigned long long isLaunch;
@property (nonatomic) unsigned long long isBackground;
@property (nonatomic) double crashTimestamp;
@property (nonatomic) double crashInAppTime;
@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *exceptionName;
@property (copy, nonatomic) NSString *exceptionReason;
@property (copy, nonatomic) NSString *crashType;
@property (copy, nonatomic) NSString *crashMachType;
@property (copy, nonatomic) NSString *crashLog;
@property (copy, nonatomic) NSString *context;

- (void).cxx_destruct;

@end
