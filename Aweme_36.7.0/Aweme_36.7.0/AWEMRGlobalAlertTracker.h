@class NSString, NSDictionary, NSNumber;
@protocol AWEMRGlobalAlertTrackerDelegate;

@interface AWEMRGlobalAlertTracker : NSObject

@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL didTrackShow;
@property (nonatomic) BOOL didTrackClick;
@property (nonatomic) BOOL didTrackDismiss;
@property (nonatomic) double displayTimestamp;
@property (copy, nonatomic) NSDictionary *commonParamDict;
@property (copy, nonatomic) NSNumber *clickType;
@property (copy, nonatomic) NSNumber *closeType;
@property (weak, nonatomic) id<AWEMRGlobalAlertTrackerDelegate> delegate;

+ (id)findTextOfView:(id)a0;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)p_trackShowWithAlert:(id)a0 fromVC:(id)a1;
- (void)p_trackClickWithType:(unsigned long long)a0;
- (void)trackDismissWithImmediately:(BOOL)a0;
- (void)p_trackDismiss;
- (id)getCurrentShowingAlertID;
- (id)initWithUniqueId:(id)a0;
- (void)trackShowWithAlert:(id)a0 fromVC:(id)a1;
- (void)trackClickWithType:(unsigned long long)a0;
- (void)trackDismiss;
- (void)recordCloseType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupNotifications;
- (void)handleAppDidEnterBackground:(id)a0;

@end
