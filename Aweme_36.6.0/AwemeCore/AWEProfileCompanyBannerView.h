@class AWEProfileBannerBGCoverView, AWEProfileCompanyBannerViewModel, NSString, UILabel, AWEProfileHeaderContext, UITapGestureRecognizer;
@protocol AWEProfileBannerContext, AWEProfileBannerDelegate;

@interface AWEProfileCompanyBannerView : UIView <AWEProfileBannerBGCoverViewDelegate, UIGestureRecognizerDelegate, AWEProfileBannerService, AWEProfileBannerProtocol>

@property (retain, nonatomic) AWEProfileBannerBGCoverView *bannerBGCoverView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *pureBgTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *pureBgDoubleTapGesture;
@property (retain, nonatomic) AWEProfileCompanyBannerViewModel *viewModel;
@property (nonatomic) BOOL isLynxLoaded;
@property (nonatomic) BOOL hasTrackedEntranceShow;
@property (retain, nonatomic) AWEProfileHeaderContext *headerContext;
@property (nonatomic) unsigned long long bannerStyle;
@property (copy, nonatomic) id /* block */ padStyleHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEProfileBannerDelegate> delegate;
@property (readonly, nonatomic) double normalHeight;
@property (readonly, nonatomic) double maxHeight;
@property (weak, nonatomic) id<AWEProfileBannerContext> context;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadUserPageAdapterClass;
+ (BOOL)canHandleData:(id)a0;

- (id)aAWEPadModuleAdapter;
- (void)bindEvent;
- (void)configWithData:(id)a0;
- (id)aAWEPadUserPageAdapter;
- (BOOL)autoAdjustHeight;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)padService;
- (BOOL)canUpdateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 data:(id)a1 context:(id)a2 delegate:(id)a3;
- (void)refreshBannerViewIfNeededWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)scrollViewBeginDraging;
- (BOOL)canBecomeFullScreen;
- (void)updateComputedLightColor:(id)a0 darkColor:(id)a1 index:(long long)a2;
- (void)didSetBannerImage:(id)a0 url:(id)a1 error:(id)a2 bannerList:(id)a3 index:(long long)a4;
- (void)updateHeaderViewBGColor:(id)a0;
- (void)trackBannerImageLoadState:(long long)a0;
- (void)updateIndexLabelWithIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)layoutBGCoverView;
- (id)eCommerceEntranceLocation;
- (void)updateBannerStyle;
- (void)_previewTopImage;
- (void)_editTopImage:(id)a0;
- (void)onTapPictureAction:(id)a0;
- (void)leaveContrailFullScreenStateWithShowTabBar:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)_refreshUI;

@end
