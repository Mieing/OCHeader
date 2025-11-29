@class BDSimPlayEventFormatter;
@protocol BDSimPlayerTrackingListener, BDSimPlayerTrackingServiceImpl, BDSimPlayerTrackingDataProvider;

@interface BDSimPlayerTracker : NSObject

@property (retain, nonatomic) id<BDSimPlayerTrackingServiceImpl> trackingService;
@property (weak, nonatomic) id<BDSimPlayerTrackingListener> trackingListener;
@property (weak, nonatomic) id<BDSimPlayerTrackingDataProvider> trackingDataSource;
@property (retain, nonatomic) BDSimPlayEventFormatter *eventFormatter;

+ (id)trackerWithSource:(id)a0 listener:(id)a1 service:(id)a2;

- (void)trackEvent:(id)a0 params:(id)a1;
- (BOOL)canTrackingPlayEvent:(id)a0;
- (void)trackPlayEvent:(id)a0;
- (void)trackPlayBlock:(id)a0;
- (id)initWithSource:(id)a0 listener:(id)a1 service:(id)a2;
- (void)trackEvent:(id)a0 params:(id)a1 userInfo:(id)a2;
- (void)trackPlayRequest:(id)a0;
- (void)trackPlayFailed:(id)a0;
- (void)trackPlayResponse:(id)a0;
- (void)trackPlayQuality:(id)a0;
- (void)trackPlayEnd:(id)a0;
- (void)trackPlayPause:(id)a0;
- (void)trackPlayResume:(id)a0;
- (void)trackPlayStop:(id)a0;
- (void)trackPlayAVSync:(id)a0 params:(id)a1;
- (void)trackPlayResponseWithoutValidation:(id)a0;
- (void).cxx_destruct;

@end
