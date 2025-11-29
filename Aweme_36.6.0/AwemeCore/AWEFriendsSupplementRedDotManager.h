@class NSString, NSTimer, AFDFrequencyExitRule, NSMutableArray;

@interface AWEFriendsSupplementRedDotManager : NSObject <AWEUserMessage, AWEFriendsSupplementRedDotManagerProtocol>

@property (nonatomic) long long supplementRedDotTimes;
@property (retain, nonatomic) AFDFrequencyExitRule *supplementDotFrequencyRule;
@property (nonatomic) BOOL hasSlideUp;
@property (nonatomic) BOOL hasInteracted;
@property (nonatomic) BOOL isShowingRedDotWhenEnterFamiliarTab;
@property (retain, nonatomic) NSMutableArray *validEnterFamiliarDates;
@property (retain, nonatomic) NSTimer *enterTabRequestTimer1;
@property (retain, nonatomic) NSTimer *leaveTabRequestTimer1;
@property (retain, nonatomic) NSString *previousTabID;
@property (retain, nonatomic) NSTimer *leaveTabRequestTimer2;
@property (retain, nonatomic) NSTimer *timer3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInABTestForSupplementRedDot;
+ (unsigned long long)pullTypeAfterPublishLandingEnterFamiliarTab;
+ (unsigned long long)pullTypeAfterPushEnterFamiliarTab;
+ (unsigned long long)pullTypeAfterMistakeEnterFamiliarTab;
+ (unsigned long long)pullTypeAfterLeaveFamiliarTab;
+ (BOOL)isInABTestForTimer1;
+ (BOOL)isInABTestForTimer2;
+ (BOOL)isInABTestForTimer3;
+ (long long)maxTimesSupplementaryRequestsRedDot;
+ (long long)sceneForTimer2;
+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)requestSocialCountWithFetchType:(long long)a0;
- (void)cancelSupplementRedDotAfterRequestSocialCount;
- (void)bindFamiliarDotSettingsWithCompletion:(id /* block */)a0;
- (void)setupTimerWhenLeaveFamiliarTab;
- (id)lastValidEnterDate;
- (void)enterFamiliarTabFromSlideTopTab:(BOOL)a0 previousTopTab:(id)a1;
- (void)markHasSlidedUp;
- (void)resetRequestSocialCountTimer1ForEnterTab;
- (void)setupRequestSocialCountTimer2ForLeaveTab;
- (void)setupTimer3;
- (id)validEnterFamiliarDatesKey;
- (void)setupTimerWhenEnteFamiliarTab:(id)a0;
- (long long)supplementDotMinIntervalTime;
- (BOOL)enableSetupAnyTimer;
- (void)resetRequestSocialCountTimer1ForLeaveTab;
- (BOOL)enableRequestSocialCountTimer1ForEnterTab;
- (long long)enterTabTimer1TimerInterval;
- (BOOL)enableRequestSocialCountTimer1ForLeave;
- (void)setupRequestSocialCountTimer1ForLeaveTab;
- (long long)leaveTabTimer1TimerInterval;
- (void)resetRequestSocialCountTimer2ForLeaveTab;
- (void)resetTimer3;
- (long long)leaveTabTimer2TimerInterval;
- (BOOL)enableSetupTimer3;
- (long long)leaveTimeAfterPublishLandingEnterFamiliarForTimer3;
- (long long)leaveTimeAfterPushEnterFamiliarForTimer3;
- (void)markHasInteracted;
- (void).cxx_destruct;
- (void)dealloc;

@end
