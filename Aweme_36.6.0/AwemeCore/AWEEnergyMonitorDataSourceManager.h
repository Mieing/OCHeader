@class NSMutableSet;

@interface AWEEnergyMonitorDataSourceManager : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSMutableSet *dataSources;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (id)shared;

- (id)getBatteryExtraInfoFromDataSource;
- (id)getCPUExtraInfoFromDataSource;
- (void).cxx_destruct;
- (id)init;
- (void)addDataSource:(id)a0;
- (void)removeDataSource:(id)a0;

@end
