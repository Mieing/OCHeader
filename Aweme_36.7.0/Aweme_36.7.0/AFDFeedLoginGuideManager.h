@class NSString, NSDate;

@interface AFDFeedLoginGuideManager : NSObject <AWEUserMessage, AFDFeedLoginGuideManagerProtocol>

@property (nonatomic) long long todayPlayCount;
@property (nonatomic) long long todayShownGuideCount;
@property (nonatomic) long long totalShownGuideCount;
@property (retain, nonatomic) NSDate *currentDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasShowPreLoginGuideToday;
+ (id)lastLogoutDate;
+ (long long)delayShowGuideBtnInterval;
+ (long long)dailyMaxButtonImpressionTimes;
+ (long long)fullPlayShowCount;
+ (long long)maxButtonImpressionTimes;
+ (BOOL)canShowLoginGuide:(id)a0 currentLoopTimes:(long long)a1;
+ (id)findFriendsAlertLastShowDate;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didDeleteAccountWithUserID:(id)a0;
- (void)updatePlayIndex:(id)a0;
- (void)recordImpression:(id)a0;
- (void)jumpToLoginPage:(id)a0;
- (void)updatePlayIndex:(id)a0 needStore:(BOOL)a1;
- (void)awe_trackFreq;
- (void)updateCommonLoginContext:(id)a0;
- (void)setLastLogoutDate;
- (BOOL)forbiddenShowOtherLoginGuideToday;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)fetchCount;

@end
