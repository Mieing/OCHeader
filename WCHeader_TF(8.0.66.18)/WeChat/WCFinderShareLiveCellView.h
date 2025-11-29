@class MMWebImageView, UILabel, WCFinderShareLiveCellViewModel, MMFinderLiveLimitModeLiveInfoEnsurer, MMUIViewController, MMFinderLiveActivityView, UIView, WCFinderLiveNowView, NSString, RichTextView, WCFinderLiveShareCellFullStatusView, WCFinderAuthInfoIconView, UIImageView;

@interface WCFinderShareLiveCellView : CommonMessageCellView <WCFinderShareLiveCellViewDelegate, MMWebImageViewDelegate>

@property (retain, nonatomic) WCFinderShareLiveCellViewModel *viewModel;
@property (retain, nonatomic) MMWebImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *coverViewContainer;
@property (retain, nonatomic) MMWebImageView *contentImageView;
@property (retain, nonatomic) MMWebImageView *maskImageView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIView *liveMaskView;
@property (retain, nonatomic) WCFinderLiveShareCellFullStatusView *liveMaskTipsView;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (retain, nonatomic) UIImageView *tinyIcon;
@property (nonatomic) BOOL canShowLiveActivityView;
@property (retain, nonatomic) MMFinderLiveActivityView *liveActivityView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMWebImageView *tailTagView;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) UILabel *coverEffectLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) MMFinderLiveLimitModeLiveInfoEnsurer *liveInfoEnsurer;
@property (retain, nonatomic) RichTextView *mediaTitleTextView;
@property (weak, nonatomic) MMUIViewController *lastViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearContentViewHiddenState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)setViewModel:(id)a0;
- (void)bindYReportSdk:(id)a0;
- (void)layoutInternal;
- (void)layoutFinished;
- (void)layoutDefault;
- (void)updateDetailLabel;
- (void)onAppear;
- (void)reloadContentViewHiddenState;
- (void)layoutLiveActivityView;
- (void)refreshLiveMaskEffect;
- (id)transitionStartImage;
- (id)operationMenuItems;
- (void)onForward:(id)a0;
- (void)setupCallbackViewForTransitionIfNeeded;
- (void)onTouchUpInside;
- (void)_executeTouchUpLogic;
- (void)prepareForMorphTransition;
- (void)doShareAnimation;
- (void)onLiveStatusChanged;
- (void)onLoadImageOK:(id)a0;
- (void)didMoveToWindow;
- (void)onDisappear;
- (BOOL)isListDragging;
- (void)onAppEnterBackground;
- (void)reportLiveShareActionWithEid:(id)a0 isExpose:(BOOL)a1;
- (void).cxx_destruct;

@end
