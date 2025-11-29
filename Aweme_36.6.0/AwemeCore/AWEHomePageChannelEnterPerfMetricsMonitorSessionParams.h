@class NSString;

@interface AWEHomePageChannelEnterPerfMetricsMonitorSessionParams : AWEHomePagePerfMetricsMonitorSessionBaseParams

@property (nonatomic) long long channelLoadCount;
@property (nonatomic) BOOL slidingViewWillDecelerate;
@property (nonatomic) BOOL hasUsePreloadModel;
@property (copy, nonatomic) NSString *preloadTriggerType;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
