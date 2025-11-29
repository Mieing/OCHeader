@class NSTimer;

@interface AWEIMUCShowTrackerNew : NSObject

@property (nonatomic) BOOL canReport;
@property (nonatomic) BOOL hasPreparedToReport;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL isLoginWhenStart;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) BOOL trackDetailsV1;
@property (nonatomic) double tabbarWillAppearTime;
@property (nonatomic) double tabbarDidAppearTime;

+ (id)sharedInstance;

- (void)p_stopTimer;
- (BOOL)canReportUnreadCountUpdate;
- (void)tabBarUnreadCountHasShown;
- (void)p_markUnreadCountReportStartTime;
- (void)p_trackUnreadCountShowTime:(double)a0;
- (void)p_trackUnreadCountShowTime:(double)a0 extraParams:(id)a1;
- (void)markBottomTabbarWillAppear:(id)a0;
- (void)markBottomTabbarDidAppear:(id)a0;
- (void)markUnreadCountReportStartTime;
- (void)tabBarUnreadCountHasShownUsingIMCache:(BOOL)a0 hasUnread:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
