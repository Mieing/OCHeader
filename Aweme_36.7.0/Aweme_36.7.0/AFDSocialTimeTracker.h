@class NSString;

@interface AFDSocialTimeTracker : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) double startTime;
@property (nonatomic) double startTimeInRootPage;
@property (nonatomic) long long currentPageDepth;
@property (readonly, nonatomic) NSString *identifier;

- (void)handleApplicationWillEnterForegroundNotification:(id)a0;
- (void)handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)handleApplicationWillResignActiveNotification:(id)a0;
- (void)trackWithDuration:(double)a0 depth:(long long)a1;
- (void)pageDepthDidChange:(long long)a0;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;
- (void)startTracking;
- (void)endTracking;

@end
