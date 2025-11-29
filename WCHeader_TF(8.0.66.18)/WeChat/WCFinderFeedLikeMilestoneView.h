@class WCFinderFeedLikeMilestoneInfo, UIView, WCFinderSizingRichTextView, MMHeadImageView, PAGView, UIImageView, UIButton, UIImage, WCFinderRichTextView, UILabel;
@protocol WCFinderFeedLikeMilestoneViewDelegate;

@interface WCFinderFeedLikeMilestoneView : UIView

@property (retain, nonatomic) WCFinderFeedLikeMilestoneInfo *milestoneInfo;
@property (nonatomic) double layoutWidth;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *cardContainerView;
@property (retain, nonatomic) UIImageView *finderIconViewInCard;
@property (retain, nonatomic) UILabel *finderTitleLabelInCard;
@property (retain, nonatomic) UILabel *likeDateLabelInCard;
@property (nonatomic) BOOL doingAvatarsAnimation;
@property (retain, nonatomic) UIView *selfAvatarViewInCard;
@property (retain, nonatomic) MMHeadImageView *imageViewForSelfAvatar;
@property (retain, nonatomic) UIView *authorAvatarViewInCard;
@property (retain, nonatomic) MMHeadImageView *imageViewForAuthorAvatar;
@property (retain, nonatomic) UIImageView *bgImageViewInCard;
@property (retain, nonatomic) WCFinderSizingRichTextView *likeTypeLabelInCard;
@property (retain, nonatomic) UIImageView *authIconViewInCard;
@property (retain, nonatomic) WCFinderSizingRichTextView *likeCountLabelInCard;
@property (retain, nonatomic) WCFinderRichTextView *bottomLabelInCard;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *saveToAlbumButton;
@property (nonatomic) struct CGSize { double width; double height; } bottomBtnsSize;
@property (retain, nonatomic) PAGView *celebratePAGView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (weak, nonatomic) id<WCFinderFeedLikeMilestoneViewDelegate> delegate;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) UIImage *authorAvatarThumbImage;
@property (copy, nonatomic) id /* block */ dismissAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 milestoneInfo:(id)a1;
- (void)setupUI;
- (id)createButtonWithTitle:(id)a0 icon:(id)a1 action:(SEL)a2;
- (void)adjustUILayout;
- (void)layoutSubviews;
- (double)getCardContainerWidth;
- (double)getCardContainerHeight;
- (double)getFinderIconWH;
- (double)getAvatarsWH;
- (double)getAvatarsMixSpacing;
- (double)getAuthIconWH;
- (double)getMaxWidthForLikeTypeLabel;
- (double)getLikeTypeAndCountVerMargin;
- (double)getAuthorAvatarAndLikeTypeVerMargin;
- (double)getTopMarginForAuthorAvatar;
- (double)getDesHorMarginForAvatars;
- (double)getFontSizeForTopOrBottomLabelsInCard;
- (double)getFontSizeForLikeTypeLabelInCard;
- (double)getFontSizeForLikeCountLabelInCard;
- (void)doShowCardAnimation;
- (void)dismissSelf;
- (void)generateCardImageAndSaveToAlbum:(id /* block */)a0;
- (void)cancelAction:(id)a0;
- (void)saveToAlbumAction:(id)a0;
- (void)showAnimated:(BOOL)a0;
- (void)resetUIViewState;
- (id)commonReportParams;
- (void).cxx_destruct;

@end
