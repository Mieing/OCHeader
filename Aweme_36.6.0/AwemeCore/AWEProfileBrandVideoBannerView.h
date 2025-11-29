@class AWEProfileBrandVideoBannerViewModel, NSString, AWETopVideoEntranceView, AWEProfileBannerBGCoverMaskView, UIView, AWEProfileTopVideoViewController, AWEProfileHeaderContext;
@protocol AWEProfileBannerContext, AWEProfileBannerDelegate;

@interface AWEProfileBrandVideoBannerView : UIView <AWEProfileBannerBGCoverMaskViewDelegate, AWEProfileBannerService, AWEProfilePadEventSubscriber, AWEProfileBannerProtocol>

@property (retain, nonatomic) AWETopVideoEntranceView *topVideoEntranceView;
@property (retain, nonatomic) UIView *topVideoContainerView;
@property (retain, nonatomic) AWEProfileTopVideoViewController *topVideoViewController;
@property (retain, nonatomic) UIView *topVideoTapView;
@property (retain, nonatomic) AWEProfileBannerBGCoverMaskView *topVideoMaskView;
@property (retain, nonatomic) AWEProfileBrandVideoBannerViewModel *viewModel;
@property (retain, nonatomic) AWEProfileHeaderContext *headerContext;
@property (nonatomic) double lastTopVideoViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEProfileBannerDelegate> delegate;
@property (readonly, nonatomic) double normalHeight;
@property (readonly, nonatomic) double maxHeight;
@property (weak, nonatomic) id<AWEProfileBannerContext> context;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)canHandleData:(id)a0;

- (id)aAWEPadModuleAdapter;
- (void)bindEvent;
- (void)configWithData:(id)a0;
- (BOOL)autoAdjustHeight;
- (BOOL)isVideoLandscape;
- (void)enterVideoFullScreen;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)enterFullScreenFromSplitScreen;
- (id)padService;
- (BOOL)canUpdateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 data:(id)a1 context:(id)a2 delegate:(id)a3;
- (void)viewDidMount;
- (void)refreshBannerViewIfNeededWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)refreshParentVC;
- (void)scrollViewBeginDraging;
- (BOOL)canBecomeFullScreen;
- (void)handleMaskViewColorChange:(id)a0;
- (double)_topVideoViewHeight;
- (double)_topBannerImageViewFittingHeight;
- (void)leaveVideoFullScreenIfVideoIsPortrait;
- (double)_topVideoRealHeight;
- (void)enterVideoFullScreenWithOffsetY:(double)a0 enterMethod:(id)a1;
- (double)_topVideoViewWidth;
- (void).cxx_destruct;
- (unsigned long long)bannerStyle;
- (id)user;
- (id)contextDelegate;
- (void)setupUI;

@end
