@class NSString, NSMutableSet, NSDate;

@interface AWECampaignKDataManager : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage>

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSMutableSet *playedVideoIDs;
@property (nonatomic) long long countDownTime;
@property (copy, nonatomic) NSString *countDownTimerIdentifier;
@property (copy, nonatomic) NSString *nextEventTimerIdentifier;
@property (copy, nonatomic) NSString *brandNewDayTimerIdentifier;
@property (retain, nonatomic) NSDate *lastUpdateServerStatusDate;
@property (nonatomic) long long retryCountOfStatus;
@property (nonatomic) long long retryCountOfComplete;
@property (nonatomic) BOOL hasFetchedRewardComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)isTeenMode;
- (void)feedPlayStatusDidChangeForItem:(id)a0 isPlaying:(BOOL)a1 isFromFeed:(BOOL)a2 loop:(BOOL)a3;
- (id)timeArray;
- (void)UIApplicationWillTerminate:(id)a0;
- (void)cancelAllTimer;
- (void)feedTableViewDidAppear:(id)a0;
- (BOOL)isKProject;
- (void)updateCampaignKStatusWithBlock:(id /* block */)a0;
- (void)updateCampaignKStatusWithStatus:(long long)a0 remainTime:(long long)a1 totalTime:(long long)a2;
- (void)scheduleEventTime;
- (BOOL)hasRequestedComplete;
- (void)needsResumeCountDownTimer;
- (void)cancelCountDownTimer;
- (void)scheduleEventWithTimeArray:(id)a0;
- (void)handleTimeChange:(BOOL)a0;
- (BOOL)isADs:(id)a0;
- (void)updateBubbleStatusWithMessage:(id)a0 isChangeDay:(BOOL)a1;
- (void)logStorageKey:(id)a0 WithError:(id)a1 value:(id)a2;
- (void)setHasRequestedComplete:(BOOL)a0;
- (void)setHasRequestedCompleteSuccess:(BOOL)a0;
- (id)storageKeyForCurrentUserWithKey:(id)a0;
- (void)UIApplicationDidBecomeActive:(id)a0;
- (void)feedTableViewDidDisappear:(id)a0;
- (void)finishTodayCampaign;
- (long long)currentRemainTimeFromStorage;
- (void)clearRemainTimeFromStorage;
- (BOOL)hasRequestedCompleteSuccess;
- (void)clearRequestStatus;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)resumeTimer;
- (void)saveState:(long long)a0;
- (void)addObservers;

@end
