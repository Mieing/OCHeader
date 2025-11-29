@class HTSEventContext, NSString, IESLiveAudienceInteractTopRightItem;
@protocol IESLiveRoomService, IESLiveAudienceInteractiveSettingsAction, IESLiveDynamicActivityProvider;

@interface IESLiveAudienceInteractiveRootPanelViewModelConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveSettingsAction> settingsActionDelegate;
@property (nonatomic) BOOL isTask;
@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) id<IESLiveDynamicActivityProvider> activityProvider;
@property (nonatomic) BOOL settingsEntranceShouldShowRedDot;
@property (nonatomic) BOOL enableInviteButton;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *changePositionTitle;
@property (nonatomic) long long itemType;
@property (nonatomic) BOOL disabledSort;
@property (nonatomic) long long seatIndex;
@property (nonatomic) BOOL isFirstInit;
@property (copy, nonatomic) NSString *settingPanelTitle;
@property (copy, nonatomic) NSString *applyTitle;
@property (retain, nonatomic) IESLiveAudienceInteractTopRightItem *topRightItem;
@property (nonatomic) BOOL newFriendInviteStyle;
@property (nonatomic) BOOL needLandScape1v6Style;
@property (nonatomic) BOOL needDisableTopAdminInteractiveButton;
@property (nonatomic) BOOL needHideSetting;
@property (nonatomic) BOOL needAdminSetting;
@property (nonatomic) long long landingTab;
@property (nonatomic) BOOL forceToSwitchModeTab;

- (void).cxx_destruct;
- (id)init;

@end
