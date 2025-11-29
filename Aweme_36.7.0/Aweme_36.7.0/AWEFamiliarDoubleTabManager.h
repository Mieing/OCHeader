@class NSString, NSDate;
@protocol IESLCMessageHandlerProtocol, AWEFamiliarDoubleTabDelegate;

@interface AWEFamiliarDoubleTabManager : NSObject <AWEUserMessage, IESLCMessageHandlerService, AWEFamiliarDoubleTabManagerProtocol>

@property (nonatomic) BOOL isFromAppPush;
@property (nonatomic) BOOL isFromPublishedPush;
@property (nonatomic) BOOL isExistYellowDot;
@property (nonatomic) BOOL isFromPublishLanding;
@property (retain, nonatomic) NSDate *lastRefreshDate;
@property (retain, nonatomic) NSDate *lastExitFriendsListDate;
@property (nonatomic) BOOL hasChangedFromPersonalPage;
@property (nonatomic) BOOL isInitialLandingVideosList;
@property (weak, nonatomic) id<AWEFamiliarDoubleTabDelegate> delegate;
@property (nonatomic) BOOL needRefreshWhenSwitchToFamiliarFeed;
@property (nonatomic) BOOL isLandingByColdLaunch;
@property (nonatomic) BOOL isShowFriendsYellowDotWhenTabBarDidClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (Class)aAFDServiceCommonAdapterClass;
+ (id)sharedManager;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)recordExistYellowDotBeforeSwitchTab;
- (id)aAFDServiceDOUYINDSAdapter;
- (void)switchFamiliarDoubleTabToFamiliarFeed;
- (void)recordPublishLanding;
- (id)aAFDServiceCommonAdapter;
- (void)clearSwitchToFamiliarFeedTabStatus;
- (void)clearPublishLandingStatus;
- (void)updateLastExitFriendsListDate;
- (void)clearLandingByColdLaunch;
- (BOOL)shouldSwitchToFamiliarFeedTab;
- (BOOL)shouldOnlyShowFamiliarTab;
- (void)initialLandingStrategy;
- (id)socialFamiliarTabShowRecommendFriendsConfigs;
- (BOOL)hasLeadingVideos;
- (BOOL)isRefreshIntervalConforms;
- (id)socialFamiliarTabShowRecommendFriendsTabTitle;
- (long long)profileTabRecommendDotFetchDelayTimeMS;
- (void)recordFromPush;
- (void)recordPublishedPush;
- (BOOL)isFriendsListFromPersonalPageMayHasChanged;
- (void)clearPersonalPageChangedStatus;
- (void)recordRefreshFriendsListDate;
- (void)recordLandingByColdLaunch;
- (BOOL)shouldSwitchToRecommendAddFriendsTab;
- (BOOL)shouldDismissRadarVenue;
- (BOOL)isExitTimeIntervalConforms;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
