@class NSString;

@interface AWEOpenPlatformActionTrackerService : HTSService <AWEOpenPlatformActionTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateParams:(id)a0 withUniqueID:(id)a1;
+ (void)uploadLocalTrackerWithUniqueID:(id)a0;
+ (void)tryUploadAllLocalTracker;
+ (void)createLocalTrackerWithName:(id)a0 withUniqueID:(id)a1;
+ (void)updateStage:(id)a0 withUniqueID:(id)a1;
+ (id)handleDurationWithParams:(id)a0;
+ (id)defaultDurationConfigs;
+ (id)dateWithStage:(id)a0 withStages:(id)a1 timeStamp:(id)a2;
+ (void)eventSDKTimelineTrackerWithActionID:(id)a0 stage:(id)a1 params:(id)a2;


@end
