@class NSString, IESLiveUserCardStore, IESLiveUserCardProfileSettingView;

@interface IESLiveUserCardSecondaryButton : IESLiveButton <IESLiveUserCardConfigProtocol> {
    long long _configTag;
}

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) long long followState;
@property (nonatomic) long long initFollowState;
@property (retain, nonatomic) IESLiveUserCardProfileSettingView *profileSettingView;
@property (copy, nonatomic) NSString *functionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithTag:(long long)a0 isShowWhite:(BOOL)a1;
- (void)configWithStore:(id)a0;
- (void)showUserCardProfileSettingView;
- (void)refreshFollowState:(BOOL)a0;
- (void)refreshFollowBack:(BOOL)a0 showWhite:(BOOL)a1;
- (void)refreshToFollow:(BOOL)a0 showWhite:(BOOL)a1;
- (void)refreshFollowed:(BOOL)a0 showWhite:(BOOL)a1;
- (void)refreshFollowEach:(BOOL)a0 showWhite:(BOOL)a1;
- (BOOL)isSingleChannal;
- (void)trackUserCardProfileSettingEntranceClick;
- (void)trackeUserCardSettingViewClick:(id)a0;
- (void)trackeUserCardSettingViewShow;
- (void)selectUserProfileStyle:(long long)a0 smartSwitchEnabled:(BOOL)a1 needUpdate:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setup;
- (BOOL)shouldShow;
- (long long)configTag;
- (void)actionTapped;

@end
