@class AFDCloseFriendsSettingsPanelContext, NSString, NSObject;
@protocol AFDCloseFriendsSettingsPanelStrategyDelegate;

@interface AFDCloseFriendsSettingsPanelDefaultStrategy : NSObject <AFDCloseFriendsSettingsPanelStrategyProtocol>

@property (weak, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyDelegate> *delegate;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelContext *context;
@property (nonatomic) unsigned long long panelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackForShow;
- (BOOL)enableMultiSection;
- (void)updateHeaderView:(id)a0;
- (void)notifyCloseFriendsCountChanged;
- (void).cxx_destruct;

@end
