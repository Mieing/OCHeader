@class NSString, NSArray, WCBlockMonitorConfiguration;
@protocol WCCrashBlockMonitorDelegate;

@interface WCCrashBlockMonitorConfig : MatrixPluginConfig

@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appShortVersion;
@property (nonatomic) BOOL enableCrash;
@property (nonatomic) BOOL enableBlockMonitor;
@property (weak, nonatomic) id<WCCrashBlockMonitorDelegate> blockMonitorDelegate;
@property (nonatomic) void /* function */ *onHandleSignalCallBack;
@property (nonatomic) void /* function */ *onAppendAdditionalInfoCallBack;
@property (retain, nonatomic) WCBlockMonitorConfiguration *blockMonitorConfiguration;
@property (nonatomic) unsigned long long reportStrategy;
@property (retain, nonatomic) NSArray *customStrategy;
@property (nonatomic) BOOL enableCorruptCrashUpload;

+ (id)defaultConfiguration;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
