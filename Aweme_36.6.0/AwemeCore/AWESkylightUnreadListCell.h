@class NSArray, UIImageView, DUXButton, UIView, UIButton;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWESkylightUnreadListCell : AWEFollowListUserBaseCell

@property (retain, nonatomic) DUXButton *alienationButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *liveMarkViewTag;
@property (retain, nonatomic) NSArray *avatar168FromThumbnailURLs;
@property (nonatomic) BOOL showLive;
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isVSFirst;
@property (copy, nonatomic) id /* block */ closeButtonTapAction;
@property (copy, nonatomic) id /* block */ alienationTapAction;
@property (nonatomic) BOOL watchVideoTextNew;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showArrowView;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL canShowSpecialAction;
@property (readonly, nonatomic) UIView *moreButtonView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;

+ (id)defaultImage;

- (void)avatarClicked;
- (void)closeButtonClicked;
- (void)showSeparatorLine:(BOOL)a0;
- (void)setFansTagArray:(id)a0;
- (void)__moreButtonClicked;
- (double)iconImageviewWidth;
- (void)__enterLiveRoom;
- (void)liveMaskViewShowIfNeeded:(BOOL)a0 onView:(id)a1;
- (void)__alienationButtonClicked;
- (void)showGuidePopover;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
