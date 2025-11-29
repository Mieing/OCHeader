@class CLLocationManager;
@protocol CLLocationManagerDelegate;

@interface MAMapLocationManagerBinding : NSObject

@property (weak, nonatomic) id<CLLocationManagerDelegate> handler;
@property (weak, nonatomic) CLLocationManager *lcoationManager;

- (void).cxx_destruct;

@end
