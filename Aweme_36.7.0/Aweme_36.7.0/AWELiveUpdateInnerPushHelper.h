@interface AWELiveUpdateInnerPushHelper : NSObject

+ (BOOL)liveInnerPushEnableWithBusinessType:(id)a0;
+ (void)trackLiveInnerPushWithBusiness:(id)a0 tempId:(id)a1 isOld:(BOOL)a2 hitExperiment:(BOOL)a3;
+ (BOOL)liveEnableTemplatePushTrackFix;
+ (BOOL)getInnerPushPlatformEnable;
+ (id)liveInnerPushBusinessTypeList;

@end
