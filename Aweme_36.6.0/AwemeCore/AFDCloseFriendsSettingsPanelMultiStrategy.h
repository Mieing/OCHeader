@class AFDCloseFriendsSettingsPanelContext, NSString, NSObject;
@protocol AFDCloseFriendsSettingsPanelStrategyDelegate;

@interface AFDCloseFriendsSettingsPanelMultiStrategy : NSObject <AFDCloseFriendsSettingsPanelStrategyProtocol>

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
- (BOOL)enableDarkModeTheme;
- (BOOL)enableMultiSection;
- (void)updateHeaderView:(id)a0;
- (void)notifyNormalDataStateChanged:(long long)a0;
- (void)notifyHiddenEmpty:(BOOL)a0;
- (void)notifySelectedFriendsCountChanged;
- (void)didTapBottomButton:(id)a0;
- (Class)friendsListCell;
- (BOOL)shouldSelectUser:(id)a0;
- (BOOL)shouldEnableUser:(id)a0;
- (BOOL)enableProfilePageTransition;
- (double)friendsListCellHeight;
- (struct CGSize { double x0; double x1; })friendsListCellAvatarSize;
- (BOOL)enableNewSearchStyle;
- (void)resetBottomButton;
- (void).cxx_destruct;
- (id)navigationBar;
- (id)headerView;
- (id)bottomButton;

@end
