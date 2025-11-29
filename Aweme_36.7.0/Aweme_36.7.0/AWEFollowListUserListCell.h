@class NSString, NSArray, UIImageView, AFDColorRingView, AWEAccessibilityCustomActionsManager, UIView, UIButton;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEFollowListUserListCell : AWEFollowListUserBaseCell

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *liveMarkViewTag;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWEAccessibilityCustomActionsManager *accessibilityManager;
@property (retain, nonatomic) NSArray *avatar168FromThumbnailURLs;
@property (nonatomic) BOOL showLive;
@property (nonatomic) BOOL showStory;
@property (nonatomic) BOOL isVSFirst;
@property (nonatomic) long long liveStatus;
@property (nonatomic) BOOL isTop;
@property (nonatomic) long long specialFollowStatus;
@property (copy, nonatomic) id /* block */ enterProfileAction;
@property (copy, nonatomic) id /* block */ enterUnreadListAction;
@property (copy, nonatomic) id /* block */ unBindColorRingView;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showArrowView;
@property (nonatomic) BOOL canCanceledAccountShowActionButton;
@property (nonatomic) BOOL isMine;
@property (readonly, nonatomic) UIView *moreButtonView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AFDColorRingView *colorRingView;
@property (copy, nonatomic) NSString *userID;

+ (id)defaultImage;

- (void)avatarClicked;
- (void)showStory25RingViewIfNeeded:(BOOL)a0;
- (id)liveInteractTagImage;
- (void)setShowOnlineDotView:(BOOL)a0;
- (void)__moreButtonClicked;
- (double)iconImageviewWidth;
- (void)__enterLiveRoom;
- (void)liveMaskViewShowIfNeeded:(BOOL)a0 onView:(id)a1;
- (void)updateContentViewBackgroundColor:(BOOL)a0;
- (void)revertCellIfNeed;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)setupUI;

@end
