@class NSString, AWEUserModel;

@interface AWEProfileEditFlowManager : NSObject <AWEProfileEditFlowManagerProtocol>

@property (nonatomic) long long currentAlertScene;
@property (nonatomic) BOOL enterMessageTabByTapped;
@property (nonatomic) BOOL enterFriendsTabByTapped;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL showingDUXPopover;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) long long recommendUserListScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *followUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canShowAtEvent:(long long)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)p_stringForScene:(long long)a0;
- (BOOL)p_needNickname;
- (BOOL)p_needAvatar;
- (BOOL)isAcquaintanceScene:(long long)a0;
- (BOOL)isInFlowSimpleAB;
- (BOOL)needNewCountStrategy;
- (id)showDateKey;
- (long long)totalUnEditTimes;
- (id)showCountKey;
- (BOOL)canShowFlowAtScene:(long long)a0;
- (void)showFlowAtScene:(long long)a0 enterFrom:(id)a1 closeCallback:(id /* block */)a2;
- (void)showFlowWithSteps:(id)a0 atScene:(long long)a1 enterFrom:(id)a2 enterMethod:(id)a3 closeCallback:(id /* block */)a4;
- (BOOL)p_needSignature;
- (BOOL)p_needGender;
- (BOOL)p_needBirthday;
- (BOOL)p_needLocation;
- (BOOL)p_needSchool;
- (void)updateTotalUnEditTimes;
- (void)showFlowAtScene:(long long)a0 enterFrom:(id)a1;
- (void)updateEnterTab:(long long)a0 byTapped:(BOOL)a1;
- (id)titleWithSteps:(id)a0;
- (void).cxx_destruct;

@end
