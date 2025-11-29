@class UIView, NSTimer, IESLiveRoomProfileTempInfoItem, NSString, UIImageView, IESLiveRoomProfileCarouselLabel, IESLiveRichTextLabel, NSMutableArray, UILabel, IESLiveRoomProfileInfoViewModel;

@interface IESLiveRoomProfileInfoView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) IESLiveRoomProfileInfoViewModel *viewModel;
@property (retain, nonatomic) IESLiveRoomProfileCarouselLabel *topLabel;
@property (retain, nonatomic) IESLiveRoomProfileCarouselLabel *bottomLabel;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) UILabel *buffAddFireLabel;
@property (retain, nonatomic) UILabel *buffFireCountLabel;
@property (retain, nonatomic) IESLiveRichTextLabel *messageTitleLabel;
@property (retain, nonatomic) IESLiveRichTextLabel *messageSubTitleLabel;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) IESLiveRoomProfileTempInfoItem *tempInfoItem;
@property (retain, nonatomic) NSMutableArray *tempInfoItemArray;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (retain, nonatomic) NSTimer *toggleTimer;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) NSTimer *diggTimer;
@property (nonatomic) BOOL isShowExchangingAni;
@property (nonatomic) BOOL isShowDiggingAni;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoViewWithViewModel:(id)a0;

- (void)didSetAttachingDIContext;
- (void)clearAnimation;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)showDoubleDiggAnimationWithMainText:(id)a0 subText:(id)a1 repeat:(BOOL)a2;
- (void)showExchangeTopAndBottomLabelAnimation;
- (void)requestToShowTempInfoViewWithItem:(id)a0;
- (void)refreshRealEnterRoom;
- (void)destroyDiggTimer;
- (void)destroyScrollTimer;
- (void)destroyToggleTimer;
- (void)toggleMoneySplitLabelsWithAnimation;
- (void)showProfileMiddleViewToggleAnimationWithduration:(double)a0 mainLabel:(BOOL)a1 subLabel:(BOOL)a2 completion:(id /* block */)a3;
- (void)toggleShowMessageMainLabel:(BOOL)a0 subLabel:(BOOL)a1;
- (void)showTempInfoAnimationWithItem:(id)a0;
- (void)switchPreLabel:(id)a0 nextLabel:(id)a1 alphaChange:(BOOL)a2;
- (void)startTempInfoScroll;
- (void)continueScrollTempInfoWithItem:(id)a0;
- (void)setViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (id)transformScaleAnimation:(double)a0 isInverse:(BOOL)a1;
- (void)resetLabelState;
- (double)infoViewWidth;
- (void)carouselAnimation:(BOOL)a0;
- (void)showMoneySplitLabelsWithValue:(id)a0;
- (void)showProfileMiddleViewAnimationWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)removeExchangeTopAndBottomLabelAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)updateViewConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)clearObserver;
- (void)dealloc;
- (id)accessibilityText;
- (void)setupViews;

@end
