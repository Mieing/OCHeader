@class NSDictionary, NSString;

@interface BDPVideoMonitor : NSObject

@property (nonatomic) double initialTime;
@property (nonatomic) double srcUpdateTime;
@property (nonatomic) BOOL hasPoster;
@property (nonatomic) double posterShowTime;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) double displayTime;
@property (retain, nonatomic) NSDictionary *errParams;
@property (nonatomic) BOOL hasReportTimelineEvent;
@property (copy, nonatomic) NSString *routeID;
@property (nonatomic) BOOL posetResult;
@property (nonatomic) double firstPlayTime;
@property (nonatomic) BOOL usePrerender;
@property (nonatomic) double prerenderStatus;
@property (nonatomic) double videoInsertTime;
@property (nonatomic) double videoPrerenderInitTime;
@property (nonatomic) double videoCallPlayTime;
@property (nonatomic) double videoPreparedTime;
@property (nonatomic) double videoFirstFrameTime;
@property (nonatomic) double videoUserPreparedTime;
@property (nonatomic) double videoUserCallPlayTime;
@property (nonatomic) double videoUserFirstFrameTime;

- (id)getVideoTimelineMonitorparams;
- (id)videoPerformanceMonitorParams;
- (void).cxx_destruct;

@end
