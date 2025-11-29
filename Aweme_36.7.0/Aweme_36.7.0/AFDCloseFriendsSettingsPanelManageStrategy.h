@class AFDCloseFriendsSettingsPanelContext, NSString, NSObject;
@protocol AFDCloseFriendsSettingsPanelStrategyDelegate;

@interface AFDCloseFriendsSettingsPanelManageStrategy : NSObject <AFDCloseFriendsSettingsPanelStrategyProtocol>

@property (nonatomic) BOOL hasTrackedSpringPanelShow;
@property (weak, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyDelegate> *delegate;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelContext *context;
@property (nonatomic) unsigned long long panelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackForShow;
- (id)trackDescription;
- (BOOL)enableShowWidgetGuideBar;
- (BOOL)enableMultiSection;
- (void)updateHeaderView:(id)a0;
- (void)notifyCloseFriendsCountChanged;
- (id)sortUserList:(id)a0;
- (void).cxx_destruct;

@end
