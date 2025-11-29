@class NSString, NSDictionary;
@protocol AWEMRPermissionAlertTrackerDelegate;

@interface AWEMRPermissionAlertTracker : NSObject

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *permissionType;
@property (nonatomic) BOOL didTrackShow;
@property (nonatomic) BOOL didTrackClick;
@property (nonatomic) double beginMediaTime;
@property (copy, nonatomic) NSDictionary *commonParamDict;
@property (weak, nonatomic) id<AWEMRPermissionAlertTrackerDelegate> delegate;

- (void)trackShow;
- (id)initWithEventID:(id)a0 permissionType:(id)a1;
- (void)trackClickWithState:(long long)a0;
- (id)getClickTypeWithState:(long long)a0;
- (void).cxx_destruct;

@end
