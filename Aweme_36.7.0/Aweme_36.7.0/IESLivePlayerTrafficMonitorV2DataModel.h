@interface IESLivePlayerTrafficMonitorV2DataModel : NSObject

@property (nonatomic) unsigned long long totalDownloadSize;
@property (nonatomic) unsigned long long currentPeriodUsage;
@property (nonatomic) unsigned long long totalCellularUsage;
@property (nonatomic) unsigned long long foregroundWifiUsage;
@property (nonatomic) unsigned long long foregroundCellularUsage;
@property (nonatomic) unsigned long long backgroundWifiUsage;
@property (nonatomic) unsigned long long backgroundCellularUsage;

- (id)init;

@end
