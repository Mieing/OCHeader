@protocol WCFinderFullMultiMediaTableViewCellDelegate;

@interface WCFinderTableViewParamModel : NSObject

@property (nonatomic) BOOL isSubScene;
@property (nonatomic) unsigned long long toolBarStyle;
@property (nonatomic) long long dataOffset;
@property (nonatomic) BOOL isHiddenFollowTips;
@property (nonatomic) BOOL isShowRecommend;
@property (nonatomic) BOOL isHiddendComment;
@property (nonatomic) BOOL isDisplayPostDate;
@property (nonatomic) BOOL isForceDisableLikeAction;
@property (nonatomic) BOOL showFoldFeed;
@property (nonatomic) BOOL showLargeSpearator;
@property (nonatomic) BOOL enableShowLiveState;
@property (nonatomic) BOOL hiddenLiveNoticeTableView;
@property (nonatomic) BOOL hiddenAuthorAppendDescLabel;
@property (nonatomic) BOOL alwaysShowFollowBtn;
@property (nonatomic) BOOL alwaysShowFollowLikeBtn;
@property (nonatomic) BOOL showMoreAction;
@property (nonatomic) BOOL showMentionGuide;
@property (nonatomic) unsigned long long toolbarDisableConfig;
@property (nonatomic) BOOL hiddenHotwordLabel;
@property (nonatomic) BOOL showAdSelectGuide;
@property (nonatomic) BOOL hiddenFeedSubtitle;
@property (nonatomic) BOOL hiddenDoubleLikeEduView;
@property (nonatomic) BOOL shouldCheckAntiAddict;
@property (weak, nonatomic) id<WCFinderFullMultiMediaTableViewCellDelegate> delegate;
@property (nonatomic) BOOL hiddenSetRingToneEntry;
@property (nonatomic) BOOL notShowFollowBtnAfterPlayOver;
@property (nonatomic) BOOL hiddenLiveAppointmentState;
@property (nonatomic) BOOL notShowTemplateBubbleEntry;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tableViewFrame;
@property (nonatomic) unsigned long long forceToolBarStyle;

+ (id)defaultParamModelWithContentVM:(id)a0 isSubScene:(BOOL)a1;

- (void)updateUnpublishedShowSwitchState;
- (void).cxx_destruct;

@end
