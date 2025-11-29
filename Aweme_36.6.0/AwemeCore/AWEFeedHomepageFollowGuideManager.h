@class NSString, NSMutableDictionary;

@interface AWEFeedHomepageFollowGuideManager : NSObject <AWEFeedHomepageFollowGuideManagerProtocol>

@property (copy, nonatomic) NSString *cachedUninterestedDateString;
@property (nonatomic) double dismissTimeInOptimization;
@property (retain, nonatomic) NSMutableDictionary *authorShowedRecordDict;
@property (copy, nonatomic) NSString *currentAwemeID;
@property (nonatomic) double currentAwemeWatchedTime;
@property (nonatomic) double currenRemainingDismissTime;
@property (nonatomic) BOOL currentAwemeObservedInteraction;
@property (copy, nonatomic) NSString *currentShowingAwemeSessionKey;
@property (copy, nonatomic) NSString *forceResetSessionKey;
@property (retain, nonatomic) NSMutableDictionary *followGuideStoragedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createSessionKey;
- (void)updateAuthorShowedRecordDictWithRecord:(id)a0;
- (id)awe_currentShowCountForDateKey;
- (long long)awe_maxShowTimePerDay;
- (id)awe_authorShowRecordModelWithUserID:(id)a0 session:(id)a1;
- (BOOL)awe_checkCanShowWithAuthor:(id)a0 sessionKey:(id)a1;
- (BOOL)awe_checkCanShowWithCurrentUser;
- (void)awe_countShowForCurrentUser;
- (id)awe_createEmptyFollowGuideStorageInfo;
- (double)leastWatchedTime;
- (BOOL)hasClickedUninterestBtnForCurrentDate;
- (BOOL)isActivatedByUserInteractionWithSession:(id)a0;
- (id)currentDateInString;
- (BOOL)updateWatchedTime:(id)a0 duration:(double)a1 model:(id)a2;
- (void)updateShownCount:(id)a0 count:(long long)a1 model:(id)a2 index:(long long)a3;
- (BOOL)shouldShowFollowGuideButton:(id)a0 model:(id)a1;
- (BOOL)hasShowedFollowGuideButtonInHistory:(id)a0 model:(id)a1;
- (void)recordClickedUninterestBtnInHistory:(id)a0;
- (BOOL)hasDismissTimeInOptimization:(id)a0;
- (BOOL)updateDismissTime:(id)a0 interval:(double)a1 model:(id)a2;
- (void)recordShowFollowGuideWithAuthor:(id)a0 session:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
