@class NSNumber, NSString;

@interface AMapIPV6NetConfig : AMapCloudConfig

@property (readonly, nonatomic) NSNumber *downgradeThreshold;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL static_ip_direct_enable;
@property (nonatomic) BOOL bgp_ip_direct_enable;
@property (nonatomic) BOOL realtime_upload;
@property (nonatomic) double static_timeout;
@property (nonatomic) int static_retry;
@property (nonatomic) int bgp_retry;
@property (nonatomic) BOOL static_enable;
@property (nonatomic) BOOL bgp_enable;

- (id)initWithCloudConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
