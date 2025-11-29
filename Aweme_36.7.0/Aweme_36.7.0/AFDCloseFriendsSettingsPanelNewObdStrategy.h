@class AFDCloseFriendsSettingsPanelContext, NSString, NSObject;
@protocol AFDCloseFriendsSettingsPanelStrategyDelegate;

@interface AFDCloseFriendsSettingsPanelNewObdStrategy : NSObject <AFDCloseFriendsSettingsPanelStrategyProtocol>

@property (nonatomic) BOOL isBottomButtonTapped;
@property (nonatomic) BOOL hasShownToast;
@property (weak, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyDelegate> *delegate;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelContext *context;
@property (nonatomic) unsigned long long panelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackForShow;
- (id)listVC;
- (id)trackDescription;
- (BOOL)enablePanelFullScreen;
- (void)didDismissPanelList:(id)a0;
- (BOOL)enableDarkModeTheme;
- (BOOL)enableMultiSection;
- (void)updateHeaderView:(id)a0;
- (void)notifyNormalDataStateChanged:(long long)a0;
- (void)notifyHiddenEmpty:(BOOL)a0;
- (void)notifySelectedFriendsCountChanged;
- (void)didTapBottomButton:(id)a0;
- (Class)friendsListCell;
- (id)sortUserList:(id)a0;
- (BOOL)shouldSelectUser:(id)a0;
- (BOOL)shouldEnableUser:(id)a0;
- (BOOL)enableProfilePageTransition;
- (double)friendsListCellHeight;
- (void)resetBottomButton;
- (id)p_disableButtonTitleWith:(unsigned long long)a0 selected:(unsigned long long)a1;
- (BOOL)blockEnabled;
- (void).cxx_destruct;
- (id)navigationBar;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)bottomButton;

@end
