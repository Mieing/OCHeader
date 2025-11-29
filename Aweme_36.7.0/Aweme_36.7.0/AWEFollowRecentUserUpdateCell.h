@class NSArray, DUXButton, UIView, UIButton;

@interface AWEFollowRecentUserUpdateCell : AWEFollowListUserBaseCell

@property (retain, nonatomic) DUXButton *alienationButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) NSArray *avatar168FromThumbnailURLs;
@property (nonatomic) BOOL showLive;
@property (nonatomic) BOOL isTop;
@property (copy, nonatomic) id /* block */ alienationTapAction;
@property (nonatomic) BOOL watchVideoTextNew;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showArrowView;
@property (nonatomic) BOOL isMine;
@property (readonly, nonatomic) UIView *moreButtonView;

+ (id)defaultImage;

- (void)avatarClicked;
- (void)__moreButtonClicked;
- (void)__alienationButtonClicked;
- (void)showGuidePopover;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
