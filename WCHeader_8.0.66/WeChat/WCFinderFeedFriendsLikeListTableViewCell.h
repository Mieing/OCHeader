@class UIView, NSString, MMHeadImageView, UIImageView, UIButton, WCFinderLikeInfo, WCFinderThanksButton, UILabel, MMUIButton;
@protocol WCFinderFeedFriendsLikeListTableViewCellDelegate;

@interface WCFinderFeedFriendsLikeListTableViewCell : MMTableViewCell <WCFinderThanksButtonDelegate, WCFinderThanksExt>

@property (retain, nonatomic) MMHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) WCFinderThanksButton *thanksButton;
@property (retain, nonatomic) MMUIButton *moreBtn;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *highLightBGView;
@property (retain, nonatomic) UILabel *firstLikeLabel;
@property (retain, nonatomic) UIImageView *logoIconView;
@property (retain, nonatomic) UIButton *doubleLikeLabel;
@property (retain, nonatomic) WCFinderLikeInfo *likeInfo;
@property (weak, nonatomic) id<WCFinderFeedFriendsLikeListTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long row;
@property (nonatomic) BOOL showFinderIdentifier;
@property (nonatomic) int curScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setupSubViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thanksIconFrame;
- (void)setupLikeInfo:(id)a0 needsSeparatorLine:(BOOL)a1 showFirstLikeLabel:(BOOL)a2 canShowMore:(BOOL)a3;
- (BOOL)checkThanksButtonNeedShow;
- (void)updateThanksButtonUI;
- (void)layoutAllSubviews;
- (void)updateNotSee:(BOOL)a0;
- (void)showHighlightAnimationWithCompletion:(id /* block */)a0;
- (void)willDisplayFriendsLikeListCell;
- (id)getReportDic;
- (void)onClickMoreBtn;
- (void)onThanksButtonClickedWithThanksState:(BOOL)a0;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)a0;
- (void)onThanksButtonSizeChanged;
- (void)onThankStateChanged:(BOOL)a0 tid:(id)a1 username:(id)a2 interactionType:(int)a3;
- (void).cxx_destruct;

@end
