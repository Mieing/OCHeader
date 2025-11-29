@class MMFinderLiveMemberSignView, MMFinderLiveTask, MMFinderLiveSharePubbleTipView, MMFinderLiveGlobalRankSignView, UITapGestureRecognizer, UIView, MMUIImageView, MMUILabel, MMFinderLiveUserStateItem, WCFinderHeadImageView, MMCPLabel, MMFinderLiveFansGroupSignView, MMLiveHeatAndIconButton, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView;
@protocol MMFinderLiveOnlineStateCollectionViewCellDelegate;

@interface MMFinderLiveOnlineStateCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *rankLabel;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUIImageView *banCommentIconImageView;
@property (retain, nonatomic) MMUIImageView *roleIconImageView;
@property (retain, nonatomic) MMUIImageView *genderIconImageView;
@property (retain, nonatomic) MMUILabel *signLabel;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveMemberSignView *memberSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *roleSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView;
@property (retain, nonatomic) MMUIImageView *switchAccountImageView;
@property (retain, nonatomic) MMUILabel *rewardAmountLabel;
@property (retain, nonatomic) MMLiveHeatAndIconButton *selectGiftButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) MMUILabel *scoreAmountLabel;
@property (retain, nonatomic) MMFinderLiveUserStateItem *onlineUserItem;
@property (retain, nonatomic) UITapGestureRecognizer *tipsPubbleViewTapGesture;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) BOOL showHeadImage;
@property (weak, nonatomic) id<MMFinderLiveOnlineStateCollectionViewCellDelegate> cellDelegate;
@property (retain, nonatomic) MMFinderLiveSharePubbleTipView *tipsPubbleView;
@property (nonatomic) BOOL bNeedSeparatorLine;
@property (nonatomic) BOOL forceDarkByBiz;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSwitchAccountTips;
- (void)setTapGestureDelegate:(id)a0;
- (void)onTipsPubbleViewTaped:(id)a0;
- (void)initSwitchAccountView;
- (void)initHeadImageView;
- (void)initNameLabel;
- (void)initDescLabel;
- (void)initSignLabel;
- (void)initBanCommentIconImageView;
- (void)updateBanCommentIconImageView;
- (void)initRoleIconImageView;
- (void)initGlobalRankSignView;
- (void)initMemberSignView;
- (void)initFansGroupSignView;
- (void)initRewardAmountLabel;
- (void)initScoreAmountLabel;
- (void)initSeperatorLine;
- (void)initGenderIconImageView;
- (void)initRoleSignView;
- (void)initMysteriousSignView;
- (void)initBuySignView;
- (void)initFrequentWatchSignView;
- (void)initFollowerSignView;
- (void)layoutRankLabel;
- (void)layoutTipsPubbleView;
- (void)layoutSelectGiftBtn;
- (void)updateWithOnlineUserItem:(id)a0 showRewardAmount:(BOOL)a1 showHeadImage:(BOOL)a2 showSelectGiftBtn:(BOOL)a3;
- (void)updateWithOnlineUserItem:(id)a0 showRewardAmount:(BOOL)a1 showHeadImage:(BOOL)a2 isSelf:(BOOL)a3 showSelectGiftBtn:(BOOL)a4;
- (void)updateDescLabelText;
- (void)configCommonSignView:(id)a0 text:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)iconColor;
- (BOOL)forceDark;
- (BOOL)shouldShowMemberSign;
- (void)onSelectGiftButtonClicked;
- (void)hidePubbleTipsView;
- (void).cxx_destruct;

@end
