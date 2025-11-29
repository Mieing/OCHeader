@class AFDCloseFriendsSettingsPanelContext, NSString, NSObject;
@protocol AFDCloseFriendsSettingsPanelStrategyDelegate;

@interface AFDCloseFriendsSettingsPanelPublishPrivacyStrategy : NSObject <AFDCloseFriendsSettingsPanelStrategyProtocol>

@property (weak, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyDelegate> *delegate;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelContext *context;
@property (nonatomic) unsigned long long panelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackForShow;
- (id)publishButtonText;
- (BOOL)enableMultiSection;
- (void)updateHeaderView:(id)a0;
- (void)updateBottomButton:(id)a0;
- (void)notifyCloseFriendsCountChanged;
- (void)notifyNormalDataStateChanged:(long long)a0;
- (void)didTapBottomButton:(id)a0;
- (id)sortUserList:(id)a0;
- (void)backwardButtonTapped;
- (void).cxx_destruct;
- (void)closeButtonTapped;
- (id)bottomButton;

@end
