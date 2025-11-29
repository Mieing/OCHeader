@class UIView, WCFinderComment, UITapGestureRecognizer, WCCommentLikeView, FinderUniCommentMediaView, NSString, UIButton, WCFinderFeedContentTextView, MMUIButton, UIColor;
@protocol TextStateRootCommentTableViewCellDelegate;

@interface TextStateRootCommentTableViewCell : TextStateBaseCommentCell <WCFinderFeedContentTextClickActionDelegate, ILinkEventExt, WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) WCFinderFeedContentTextView *textView;
@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) WCCommentLikeView *dislikeView;
@property (retain, nonatomic) UITapGestureRecognizer *replayTapGestureRecognizer;
@property (retain, nonatomic) UIButton *failCommentTips;
@property (retain, nonatomic) UIView *refContentBackgroundView;
@property (retain, nonatomic) WCFinderFeedContentTextView *refContentTextView;
@property (weak, nonatomic) UIView *refContentLineView;
@property (nonatomic) BOOL profileSwitch;
@property (nonatomic) BOOL isFriendIdentity;
@property (nonatomic) BOOL isFinderIdentity;
@property (retain, nonatomic) MMUIButton *moreActionButton;
@property (nonatomic) BOOL isSelfPost;
@property (retain, nonatomic) FinderUniCommentMediaView *mediaView;
@property (weak, nonatomic) id<TextStateRootCommentTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIColor *themeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showMediaWithComment:(id)a0;
+ (double)sectionHeightWith:(id)a0 width:(double)a1 forceExpand:(BOOL)a2 isAuthorView:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })mediaViewSize;

- (id)defaultThemeColor;
- (id)authorColor;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isContentTruncated;
- (void)setupUI;
- (void)setUpRefContentView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithModel:(id)a0 width:(double)a1 isAuthorView:(BOOL)a2 isCommentClose:(BOOL)a3 enableShowFinder:(BOOL)a4 isSelfPost:(BOOL)a5;
- (void)adjustUILayout;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)a0;
- (id)backgroundColorInNormalMode;
- (void)prepareForReuse;
- (void)showViewHighLightByRefComment;
- (void)onFinderContactUpdate:(id)a0;
- (void)onClickLikeComment;
- (void)onClickDislikeComment;
- (void)onClickMoreAction;
- (void)clickAvatar;
- (void)clickRetryCommentAction;
- (void)longPress:(id)a0;
- (void)showCommentMenuView;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1;
- (void)onFeedContentTextClick:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)onFeedContentTextView:(id)a0 clickSubCommentWeChat:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onFeedContentTextView:(id)a0 clickReplyUsername:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
