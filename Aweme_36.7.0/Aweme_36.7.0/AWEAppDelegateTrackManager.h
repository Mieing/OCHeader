@class NSDictionary, NSString, NSDate;

@interface AWEAppDelegateTrackManager : NSObject <AWEUserMessage, AWEAppDelegateTrackManagerProtocol>

@property (retain, nonatomic) NSDate *lastLaunchDate;
@property (copy, nonatomic) NSDictionary *launchInfoForTrackDict;
@property (copy, nonatomic) NSString *sourceApplication;
@property (nonatomic) BOOL isColdLaunchAndReceivedPush;
@property (nonatomic) BOOL isColdLaunchAndReceivedOpenURL;
@property (nonatomic) BOOL isOutOfFocusTemporarily;
@property (nonatomic) unsigned long long launchtype;
@property (nonatomic) unsigned long long launchFrom;
@property (copy, nonatomic) NSString *launchMethod;
@property (nonatomic) double launchTimeStamps;
@property (nonatomic) double coldLaunchTimeStamp;
@property (copy, nonatomic) NSString *pushURL;
@property (copy, nonatomic) NSString *zlinkSchema;
@property (copy, nonatomic) NSString *routeMonitorSession;
@property (copy, nonatomic) NSString *routeMonitorReferrer;
@property (copy, nonatomic) NSString *launchMode;
@property (copy, nonatomic) NSString *siriSearchGDLabel;
@property BOOL needReportLaunchLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUITrackerCommonAdapterClass;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)getUrlParamFromOptions:(id)a0;
- (void)trackApplaunchApplication:(id)a0 isColdLaunch:(BOOL)a1 launchMethod:(unsigned long long)a2;
- (void)trackPushAction:(unsigned long long)a0 pushOptions:(id)a1;
- (id)trackingParamsWithOptions:(id)a0 isClicked:(BOOL)a1;
- (void)track3DTouchEvent:(id)a0 forceTouchOptions:(id)a1;
- (id)getSecUIDTrackingInfoWithSecID:(id)a0 andGroupName:(id)a1;
- (void)saveLoginUserSecUid;
- (void)_saveLoginUseSecUid;
- (void)_saveLogoutUserSecUid;
- (void)trackApplaunchApplication:(id)a0 isColdLaunch:(BOOL)a1 launchMethod:(unsigned long long)a2 isCompensate:(BOOL)a3;
- (BOOL)isOpenSDKAuth:(id)a0;
- (BOOL)isOpenSDKShare:(id)a0;
- (long long)getBadgeNumber;
- (long long)getAppIconBadgeNumber;
- (void)checkValidGdLabelWithGdLabel:(id)a0 launchMethod:(unsigned long long)a1;
- (id)aAWEUITrackerCommonAdapter;
- (void).cxx_destruct;
- (id)init;

@end
