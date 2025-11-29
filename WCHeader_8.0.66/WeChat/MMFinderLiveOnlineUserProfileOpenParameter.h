@class NSData, UIColor, WCFinderContact, MMFinderLiveConnectMicUser, MMFinderLiveTask, UIView, NSString, MMFinderLiveTaskId, FinderLiveBadgeInfo, FinderLiveContact;

@interface MMFinderLiveOnlineUserProfileOpenParameter : MMObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *micUserInfo;
@property (retain, nonatomic) FinderLiveBadgeInfo *liveBadgeInfo;
@property (nonatomic) BOOL isOfflineOperation;
@property (nonatomic) unsigned long long disableCommentDef;
@property (nonatomic) BOOL isSendPrivateMsgEnable;
@property (nonatomic) BOOL isRewardEnable;
@property (nonatomic) BOOL isFinderLiveAliasRole;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightRect;
@property (nonatomic) double highlightRectCornerRadius;
@property (retain, nonatomic) NSData *liveContactExtInfo;
@property (retain, nonatomic) UIColor *maskViewColor;
@property (nonatomic) BOOL isSwitchLiveEnabled;
@property (nonatomic) BOOL isFromOnlineStateView;
@property (nonatomic) BOOL isCommentAssistant;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL isNeedObserveDarkModeChange;
@property (nonatomic) unsigned long long openProfileScene;
@property (nonatomic) unsigned long long userLiveIdentity;
@property (nonatomic) BOOL userIsAnchor;
@property (nonatomic) BOOL isSelfConnectMicUser;
@property (retain, nonatomic) NSString *finderUserName;
@property (nonatomic) BOOL showMicSeatSettingButton;
@property (nonatomic) BOOL showStopConnectMicButton;
@property (copy, nonatomic) NSString *locationText;
@property (copy, nonatomic) NSString *genderText;
@property (copy, nonatomic) NSString *liveMicId;
@property (copy, nonatomic) NSString *commentMsgId;
@property (nonatomic) unsigned long long commentMsgSeq;
@property (copy, nonatomic) id /* block */ complaintActionCallback;
@property (copy, nonatomic) id /* block */ kickoutActionCallback;
@property (copy, nonatomic) id /* block */ banCommentActionCallback;
@property (copy, nonatomic) id /* block */ noSenseBanCommentActionCallback;
@property (copy, nonatomic) id /* block */ sendPrivateMsgActionCallback;
@property (copy, nonatomic) id /* block */ followActionCallback;
@property (copy, nonatomic) id /* block */ openStreamProfileActionCallback;
@property (copy, nonatomic) id /* block */ openRewardGiftViewActionCallback;
@property (copy, nonatomic) id /* block */ modifyCommentAssistantRoleCallback;
@property (copy, nonatomic) id /* block */ viewDidOpenCallback;
@property (copy, nonatomic) id /* block */ viewDidDismissCallback;
@property (copy, nonatomic) id /* block */ actionSheetCancelCallback;
@property (copy, nonatomic) id /* block */ actionSheetWillDismissCallback;
@property (copy, nonatomic) id /* block */ switchLiveRoomActionCallback;
@property (copy, nonatomic) id /* block */ muteMicUserActionCallback;
@property (copy, nonatomic) id /* block */ micSeatSettingActionCallback;
@property (copy, nonatomic) id /* block */ maximizeOrMinimizeMicAudienceActionCallback;
@property (copy, nonatomic) id /* block */ stopAudienceConnectMicActionCallback;
@property (copy, nonatomic) id /* block */ viewWillDismissCallback;
@property (nonatomic) unsigned long long fallbackLiveID;
@property (nonatomic) unsigned long long fallbackObjectID;
@property (nonatomic) BOOL isOtherAnonymousUser;

- (id)init;
- (BOOL)isFinderUser;
- (void)clearCallBacks;
- (void).cxx_destruct;

@end
