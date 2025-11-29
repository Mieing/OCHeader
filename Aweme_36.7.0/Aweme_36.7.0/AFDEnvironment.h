@class NSString;

@interface AFDEnvironment : NSObject <AFDEnvironment>

@property (class, retain, nonatomic) Class environmentProvider;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenMode;
+ (id)currentLoginUser;
+ (BOOL)isStory25ColorRingEnable;
+ (BOOL)enableNewCloseFriendsMoment;
+ (void)updateMateOnboardingConfigWithSettingsDictionary:(id)a0;
+ (BOOL)closeFriendsIsEnabled;
+ (BOOL)enableFriendRebrand;
+ (id)accurateCurrentServerDate;
+ (double)currentServerTimeStamp;
+ (id)commonQueryParams;
+ (id)singleSyncColorRingQueryParams;
+ (BOOL)isContactPermissionGranted;
+ (id)observeMateRelation:(id)a0 handler:(id /* block */)a1;
+ (BOOL)enableMateTables;
+ (id)singleSyncPlanQueryParams;
+ (id)singleSyncCommonQueryParams;
+ (id)singleReportColorRingQueryParams;
+ (BOOL)isSilverWingChatBot:(id)a0;
+ (void)recommendReasonWithPrivacyContext:(id)a0 userModel:(id)a1 recommendTemplate:(id)a2 recommendReason:(id)a3;
+ (void)initialize;
+ (double)processStartTime;
+ (id)currentLoginUserID;


@end
