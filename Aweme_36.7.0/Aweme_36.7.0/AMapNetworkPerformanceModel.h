@class NSString;

@interface AMapNetworkPerformanceModel : AMapNetworkMonitorModel

@property (copy, nonatomic) NSString *serverTime;
@property (copy, nonatomic) NSString *exceptSize;

- (id)realTimeHeader;
- (id)modelIdentifer;
- (BOOL)isFail;
- (id)offline_datazize;
- (id)initSucModelWithTransactionMetrics:(id)a0 serverTime:(id)a1 dataSize:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
