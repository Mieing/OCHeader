@class UIView, WCFinderInteractionLabelGroupView, NSString, UIImageView, WCFinderLikeInfo, UIButton, WCFinderThanksButton, WCFinderHeadImageView, UILabel;
@protocol WCFinderFeedLikeListCellDelegate;

@interface WCFinderFeedLikeListCollectionViewCell : UICollectionViewCell <WCFinderHeadImageViewDelegate, WCFinderThanksButtonDelegate, WCFinderThanksExt>

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *finderLogoView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *highLightBGView;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel;
@property (retain, nonatomic) WCFinderThanksButton *thanksButton;
@property (retain, nonatomic) WCFinderLikeInfo *likeInfo;
@property (retain, nonatomic) UIButton *doubleLikeLabel;
@property (weak, nonatomic) id<WCFinderFeedLikeListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupEvent;
- (void)prepareForReuse;
- (void)updateWithLikeInfo:(id)a0 needsSeparatorLine:(BOOL)a1;
- (void)layoutUI;
- (void)showHighlightAnimation;
- (void)clearHighlight;
- (void)setUpUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thanksIconFrame;
- (void)clickNickNameAction;
- (void)onThanksButtonClickedWithThanksState:(BOOL)a0;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)a0;
- (void)onThanksButtonSizeChanged;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)onLikeInfo:(id)a0 thankStateChanged:(BOOL)a1;
- (void)onThankStateChanged:(BOOL)a0 tid:(id)a1 username:(id)a2 interactionType:(int)a3;
- (void).cxx_destruct;

@end
