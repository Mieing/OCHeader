@interface AWELiveInappPushTracker : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackInAppPushEventWithPushModel:(id)a0 actionType:(id)a1;
+ (BOOL)enablePreview:(id)a0;
+ (void)trackInAppPushLiveShowWithLivePushModel:(id)a0;
+ (void)trackFriendRoomPushWithPushModel:(id)a0 event:(id)a1 actionType:(id)a2;
+ (void)trackPushSDKPushClickedWithPushModel:(id)a0;
+ (void)trackOpenLivePushWithPushModel:(id)a0 actionType:(id)a1;

@end
