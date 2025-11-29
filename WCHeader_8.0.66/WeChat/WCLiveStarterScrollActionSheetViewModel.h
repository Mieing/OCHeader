@class WCFinderStarterLiveViewModel, MMFinderLiveModeModel, MMFinderLiveTaskId;

@interface WCLiveStarterScrollActionSheetViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) WCFinderStarterLiveViewModel *startVM;
@property (retain, nonatomic) MMFinderLiveModeModel *modeModel;
@property (nonatomic) unsigned long long hiddenItemsFlag;
@property (readonly, nonatomic) BOOL shouldHideRedPacketItem;
@property (readonly, nonatomic) BOOL shouldHideLinkItem;
@property (readonly, nonatomic) BOOL shouldHideFansGroupItem;
@property (readonly, nonatomic) BOOL shouldHideRewardWishItem;

- (id)initWithTaskId:(id)a0;
- (BOOL)isCommentAssistantEnable;
- (BOOL)isRecommendOptionExpose;
- (BOOL)isCommentEnable;
- (BOOL)isBigEmoticonCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isBulletinEnable;
- (BOOL)isQuickReplyEnable;
- (BOOL)isFreeTalkEnabled;
- (BOOL)isMicEnable;
- (BOOL)isRewardEnable;
- (BOOL)isMicMuted;
- (BOOL)isPrizeEnabled;
- (BOOL)showPrizeInController;
- (BOOL)isPlayTogetherEnabled;
- (BOOL)isShoppingEnabled;
- (BOOL)isHiddenAudienceNameEnable;
- (BOOL)isHiddenAudienceName;
- (long long)currVisibilityMode;
- (BOOL)isRewardAnchorEntrenceEnable;
- (BOOL)isLikeAnchorEntrenceEnable;
- (BOOL)enableShowFansGroupEntrance;
- (BOOL)isShowTrafficEntranceEnabled;
- (BOOL)isShowEntranceForFeedbackHelpEnabled;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)isFansGroupEnabled;
- (BOOL)isAnchorCustomizeRewardEnabled;
- (BOOL)isRecommendOptionEnabled;
- (BOOL)isRewardItemEnabled;
- (BOOL)isBGMusicItemEnabled;
- (BOOL)game_enableSettingBGMusic:(id)a0;
- (BOOL)isCreateLiveSongsItemEnabled;
- (BOOL)game_canCreateLiveSongs:(id)a0;
- (BOOL)isLinkItemEnabled;
- (BOOL)isShowOpPromotionCardEntranceEnable;
- (BOOL)isShowCreatorCenterEnabled;
- (BOOL)shouldHideRewardMusicItem;
- (id)liveTask;
- (void).cxx_destruct;

@end
