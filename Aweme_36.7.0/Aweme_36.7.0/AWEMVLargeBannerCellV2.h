@class NSString, NSArray, UIImageView, AWEGradientView, BDImageView, NSMutableArray, AWEMVIndentBannerView, UILabel, AWEMVLargeBannerTracker;

@interface AWEMVLargeBannerCellV2 : AWEDCFeedBaseCell <DUXIndentBannerDelegate>

@property (retain, nonatomic) UIImageView *closeIconView;
@property (retain, nonatomic) BDImageView *bannerImageView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEMVIndentBannerView *bannerView;
@property (copy, nonatomic) NSArray *bannerModelList;
@property (retain, nonatomic) AWEMVLargeBannerTracker *bannerTracker;
@property (retain, nonatomic) NSMutableArray *bannerShowIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementArray;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)cellDidEndDisplaying;
- (long long)duxIndentBannerNumberOfItem;
- (id)duxIndentBannerCell:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)duxIndentBannerCell:(id)a0 didEndDisplayingCellAtIndex:(long long)a1;
- (void)duxIndentBannerCell:(id)a0 willDisplayCellAtIndex:(long long)a1;
- (BOOL)shouldNotActive;
- (unsigned long long)customDisabledGesture;
- (BOOL)enableTheaterBannerFix;
- (id)mvContext;
- (BOOL)bannerHadShowedWithModel:(id)a0;
- (void)setupBannerUI;
- (void)bindNotification;
- (void)bannerPause;
- (void)handleSideBarDidOpen:(id)a0;
- (void)bannerClickActionWithIndex:(long long)a0;
- (void)bannerPlay;
- (id)currentBannerViewModel;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)setupUI;
- (id)activeView;

@end
