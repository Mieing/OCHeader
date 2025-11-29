@protocol AWEBatManAlertTrackerDelegate;

@interface AWEBatManExtensionManager : NSObject

@property (weak, nonatomic) id<AWEBatManAlertTrackerDelegate> trackerDelegate;

+ (id)sharedInstance;

- (void)registerTrackerDelegate:(id)a0;
- (void).cxx_destruct;

@end
