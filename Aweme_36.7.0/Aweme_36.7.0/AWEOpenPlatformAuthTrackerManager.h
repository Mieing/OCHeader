@class NSString, NSDictionary, NSMutableArray, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformAuthTrackerManager : NSObject

@property (weak, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (nonatomic) BOOL trackOpenAuthShowDurationOnce;
@property (nonatomic) long long showOrder;
@property (nonatomic) BOOL trackAuthNotesShowOncs;
@property (retain, nonatomic) NSString *authID;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *launchMethod;
@property (nonatomic) double authStartTimeStamp;
@property (nonatomic) double authInAppStartTimeStamp;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *authSource;
@property (nonatomic) BOOL isNewEntrance;
@property (nonatomic) BOOL isLynxAuth;
@property (nonatomic) double authPageShowTimeStamp;
@property (retain, nonatomic) NSMutableArray *authInfoShowArray;
@property (retain, nonatomic) NSMutableArray *authInfoSelectArray;
@property (nonatomic) unsigned long long scopeType;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) BOOL skipAll;
@property (nonatomic) BOOL hasEnterBack;

+ (id)shareManager;
+ (void)trackNetworkResultWithRspDict:(id)a0 error:(id)a1 costMS:(double)a2 extraDict:(id)a3;

- (id)enterMethod;
- (id)commonParams;
- (void)cleanAllCache;
- (void)trackAuthFlowStage:(id)a0;
- (void)trackAuthResultWithErrorCode:(long long)a0 withErrorMsg:(id)a1;
- (void)trackAuthRiskPushShow;
- (void)trackAuthRiskPushClick:(id)a0;
- (void)trackAuthRiskTrigger;
- (void)trackAuthNotesShow:(unsigned long long)a0;
- (void)trackAuthButtomModelShowWithModelType:(id)a0 authInfoShow:(id)a1 authInfoSelect:(id)a2 scopeType:(unsigned long long)a3;
- (void)trackClickOrEnterBackAtPosition:(id)a0 hasEnterBack:(BOOL)a1;
- (void)trackAuthButtomModelClickWithModelType:(id)a0 clickType:(id)a1 authInfoShow:(id)a2 authInfoSelect:(id)a3 scopeType:(unsigned long long)a4;
- (void)trackShowQuestionMark:(unsigned long long)a0 scopeType:(unsigned long long)a1 authItem:(id)a2;
- (void)updateAuthPageShowTimeStampFromNow;
- (void)trackAuthNotify:(unsigned long long)a0 authInfoShow:(id)a1 authInfoSelect:(id)a2 scopeType:(unsigned long long)a3;
- (void)trackAuthSubmit:(unsigned long long)a0 authInfoShow:(id)a1 authInfoSelect:(id)a2 scopeType:(unsigned long long)a3;
- (void)trackAuthRefuse:(unsigned long long)a0 refuseType:(id)a1 authInfoShow:(id)a2 authInfoSelect:(id)a3 scopeType:(unsigned long long)a4;
- (void)trackClickQuestionMark:(unsigned long long)a0 scopeType:(unsigned long long)a1 authItem:(id)a2;
- (void)initWithClientKey:(id)a0 launchMethod:(id)a1 authStartStamp:(id)a2 pageType:(unsigned long long)a3;
- (void)trackAwemeAuthTrigger;
- (void)cleanAuthInfoCache;
- (void)updateAuthInAppStartTimeStampFromNow;
- (void)updateAuthStartTimeStampFromNow;
- (void)cleanBaseCache;
- (id)getAuthSource;
- (double)getOpenSDKLaunchDuration;
- (double)getOpenSDKAuthDuration;
- (double)getOpenSDKAuthInAppDuration;
- (void)trackAwemeAuthLynxLoadError:(id)a0 withLynxAuthID:(id)a1;
- (void)trackerEditClick:(id)a0;
- (void)trackCommentHyperLinkAtHalf:(BOOL)a0 isShow:(BOOL)a1;
- (void)trackInfoIconWithEvent:(id)a0;
- (void)trackAuthSwitchNotifyWithCount:(long long)a0;
- (void)trackAuthSwitchClick:(id)a0 count:(long long)a1;
- (void)trackAuthAbnormalInterrupt;
- (void)trackAuthRetryPopupShow;
- (void)trackAuthRetryPopupClick:(id)a0;
- (void).cxx_destruct;
- (void)initWithFlowManager:(id)a0;

@end
