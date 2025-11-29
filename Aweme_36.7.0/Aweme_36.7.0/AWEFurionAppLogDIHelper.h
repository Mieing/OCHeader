@protocol AWETrackingService;

@interface AWEFurionAppLogDIHelper : NSObject <FurionAppLogDIHelper>

@property (weak, nonatomic) id<AWETrackingService> trackingService;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
