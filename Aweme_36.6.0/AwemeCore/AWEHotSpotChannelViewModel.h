@class AWEHotSpotChannelSkylightViewModel, NSString, AWEHotSpotChannelFeedViewModel, AWEHotSpotPerformanceViewModel, AWEHotSpotChannelViewState;

@interface AWEHotSpotChannelViewModel : NSObject

@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL hasReportCacheMonitor;
@property (nonatomic) BOOL hasFixPerfData;
@property (retain, nonatomic) AWEHotSpotChannelFeedViewModel *feedViewModel;
@property (retain, nonatomic) AWEHotSpotChannelSkylightViewModel *skylightViewModel;
@property (retain, nonatomic) AWEHotSpotPerformanceViewModel *performanceViewModel;
@property (retain, nonatomic) AWEHotSpotChannelViewState *viewState;
@property (copy, nonatomic) NSString *enterMethod;

- (id)initWithReferString:(id)a0;
- (void)monitorChannelPreloadWithMonitorType:(unsigned long long)a0;
- (void)startObserver;
- (BOOL)hideSkyLightAndShowCapsuleView;
- (void)fixPreloadDataOrCachePerfDataWithLoadMetric:(id)a0 isCache:(BOOL)a1;
- (void)monitorCacheWithAwemeID:(id)a0;
- (void).cxx_destruct;

@end
