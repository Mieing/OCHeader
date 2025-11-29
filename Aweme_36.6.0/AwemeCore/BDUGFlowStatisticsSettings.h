@interface BDUGFlowStatisticsSettings : NSObject

@property (nonatomic) BOOL enableCarrierTypeWithIPV6;
@property (nonatomic) BOOL enableTrackFlowRequstSuccess;
@property (nonatomic) BOOL enableMobileWifiOptimize;

- (void)setFlowStatisticsEnable:(BOOL)a0;
- (void)setFlowOrderEntranceIsEnable:(BOOL)a0;
- (void)setFlowUploadLoaclIsEnable:(BOOL)a0;
- (void)setFlowStatisticsRequestInterval:(long long)a0;
- (void)setFlowStatisticsRemainTipValue:(long long)a0;
- (void)setFlowDefaultCheckTimeInterval:(long long)a0;
- (void)setFlowLocalQueryInterval:(long long)a0;
- (void)setFlowCmccRequestUrl:(id)a0;
- (void)setFlowTelecomRequestUrl:(id)a0;
- (BOOL)flowStatisticsEnable;
- (BOOL)flowOrderEntranceEnable;
- (BOOL)flowUploadLoaclIsEnable;
- (long long)flowStatisticsRequestInterval;
- (long long)flowStatisticsRemainTipValue;
- (long long)flowDefaultCheckTimeInterval;
- (long long)flowLocalQueryInterval;
- (id)flowCmccRequestUrl;
- (id)flowTelecomRequestUrl;
- (void)setFlowStatisticsOptions:(id)a0;
- (id)flowStatisticsOptions;
- (id)init;

@end
