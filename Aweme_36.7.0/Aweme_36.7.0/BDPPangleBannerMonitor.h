@interface BDPPangleBannerMonitor : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double initTime;
@property (nonatomic) double ritIdRequestTime;
@property (nonatomic) double requestAdTime;
@property (nonatomic) double renderAdTime;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hitRitIdCache;

- (id)getPangleBannerTimelineMonitorParams;

@end
