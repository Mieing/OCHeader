@class UIView, WCFinderComment, WCCommentLikeView, FinderUniCommentMediaView, UIColor, UIImageView, UIButton, WCFinderFeedContentTextView, NSString, NSIndexPath;
@protocol WCCommentSubCommentTableViewCellActionDelegate;

@interface WCCommentSubCommentTableViewCell : WCCommentDetailCell <WCFinderFeedContentTextClickActionDelegate, WCFinderHeadImageViewDelegate, WCFinderContactExt>

@property (retain, nonatomic) WCFinderFeedContentTextView *textView;
@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *finderIconImageView;
@property (retain, nonatomic) UIView *hightLightView;
@property (retain, nonatomic) UIButton *failCommentTips;
@property (nonatomic) BOOL wechatAccountProfileSwitch;
@property (nonatomic) BOOL isFriendIdentity;
@property (nonatomic) BOOL isFinderIdentity;
@property (nonatomic) BOOL isSelfPost;
@property (retain, nonatomic) WCCommentLikeView *dislikeView;
@property (retain, nonatomic) FinderUniCommentMediaView *mediaView;
@property (weak, nonatomic) id<WCCommentSubCommentTableViewCellActionDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) UIColor *themeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showMediaWithComment:(id)a0;
+ (id)getContentWithComment:(id)a0;
+ (double)cellHeightWith:(id)a0 width:(double)a1 forceExpand:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })mediaViewSize;

- (id)defaultThemeColor;
- (id)authorColor;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)setupUI;
- (id)currentLinkColor;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithComment:(id)a0 enableShowFinder:(BOOL)a1 isAuthor:(BOOL)a2;
- (void)longPress:(id)a0;
- (void)showCommentMenuView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)backgroundColorInNormalMode;
- (void)clickAvatar;
- (void)showViewHighLightByRefComment;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)a0;
- (BOOL)isContentTruncated;
- (void)onFinderContactUpdate:(id)a0;
- (void)updateTopTitleLayout;
- (void)onClickLikeComment;
- (void)onClickDislikeComment;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)onFeedContentTextView:(id)a0 clickSubComment:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onFeedContentTextView:(id)a0 clickSubCommentWeChat:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onFeedContentTextView:(id)a0 clickReplyUsername:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
