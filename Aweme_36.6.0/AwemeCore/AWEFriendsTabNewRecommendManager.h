@class NSString;

@interface AWEFriendsTabNewRecommendManager : NSObject <AWEUserMessage, AWEFriendsTabNewRecommendManagerProtocol>

@property (nonatomic) BOOL hasFetched;
@property (nonatomic) BOOL hasDisplayed;
@property (nonatomic) BOOL hasMateApplicationCount;
@property (nonatomic) BOOL friendsTabHasAppeared;
@property (nonatomic) BOOL friendsTabHasData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)friendsTabDidRefresh:(BOOL)a0;
- (void)friendsTabDidAppear;
- (void)didDisplayCount;
- (void)didConsumeOuterPush;
- (void)didConsumeCount;
- (void)didShowFriendsTabEmptyRecommend;
- (void)p_mateApplicationCountChanged:(id)a0;
- (id)friendsTabHasDataKey;
- (id)clickCountRule;
- (id)showExitRule;
- (void)fetchCountIfNeeded;
- (id)init;
- (void)dealloc;
- (long long)count;

@end
