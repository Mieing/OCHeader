@class NSString;

@interface AWEMessageReachPopViewTracker : HTSService <AWEMessageReachPopViewTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)injectTrackExtra:(id)a0 context:(id)a1;
+ (void)trackOnPopViewClickWithContext:(id)a0 clickType:(unsigned long long)a1 extra:(id)a2;
+ (void)trackOnPopViewCloseWithContext:(id)a0 closeType:(unsigned long long)a1 extra:(id)a2;
+ (void)injectTrackExtra:(id)a0 forceAlertContext:(id)a1;
+ (void)trackOnPopViewClickWithForceAlertContext:(id)a0 clickType:(unsigned long long)a1 extra:(id)a2;
+ (void)trackOnPopViewCloseWithForceAlertContext:(id)a0 closeType:(unsigned long long)a1 extra:(id)a2;
+ (id)getEnterFrom;
+ (id)getEnterFromWithViewController:(id)a0;
+ (void)trackOnForceAlertReject:(id)a0 triggerID:(id)a1 rejectType:(unsigned long long)a2 msg:(id)a3;
+ (void)trackOnNormalAlertWithContext:(id)a0 rejectType:(unsigned long long)a1 msg:(id)a2;
+ (void)trackOnPopViewShowWithContext:(id)a0;
+ (void)trackOnPopViewShowWithForceAlertContext:(id)a0;
+ (void)p_injectTrackExtra:(id)a0 context:(id)a1;
+ (void)p_trackOnPopViewShowWithContext:(id)a0;
+ (void)p_trackOnPopViewClickWithContext:(id)a0 clickType:(unsigned long long)a1 extra:(id)a2;
+ (void)p_trackOnPopViewCloseWithContext:(id)a0 closeType:(unsigned long long)a1 extra:(id)a2;
+ (void)trackOnPopViewReject:(id)a0;
+ (id)generateParamsWithContext:(id)a0;
+ (id)getClickTypeTrackString:(unsigned long long)a0;
+ (BOOL)enableMergeParamsAddPrefix;
+ (BOOL)popViewInfoTrackEnable;


@end
