@class NSString;

@interface AWEContentPreferenceManager : NSObject <AWEBasicModeMessage, AWEUserMessage, AWEDigitalWellbeingMessage, AWEContentPreferenceManagerProtocol>

@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *refreshToastMsg;
@property (nonatomic) BOOL shouldRrefreshFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)addNotifications;
- (void)setFeedNeedsRefreshWithCaller:(id)a0 needsRefresh:(BOOL)a1 refreshToastMsg:(id)a2;
- (void)feedRecommendChannelViewDidAppear;
- (void)resetStatus;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)refreshIfNeeded;

@end
