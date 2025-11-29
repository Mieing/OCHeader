@class UIView, MMWebImageView, WACircleLoadingView, _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController, NSString, UIImageView, WCTagsView, MMUILabel, UILabel;

@interface WACircleProgressLoadingViewController : WALoadingViewController <IWALocalCacheMgrExt, WACapsuleMenuDataSource, WAAppTaskSystemCoverViewDataSource>

@property (nonatomic) BOOL isInDarkMode;
@property (nonatomic) unsigned long long initTime;
@property (nonatomic) unsigned long long appearTime;
@property (nonatomic) unsigned int lastProgressTime;
@property (retain, nonatomic) UIView *weappBrandContainerView;
@property (retain, nonatomic) UIImageView *weappBrandLogoImageView;
@property (retain, nonatomic) UILabel *weappBrandTitleLabel;
@property (retain, nonatomic) UILabel *weakNetTipsLabel;
@property (retain, nonatomic) WCTagsView *officialTagsView;
@property (retain, nonatomic) WCTagsView *easyBuyLogoImageView;
@property (retain, nonatomic) WCTagsView *flagshipImageView;
@property (retain, nonatomic) WCTagsView *financialLicenseImageView;
@property (retain, nonatomic) _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController *networkInavalidVC;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMWebImageView *logoView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WACircleLoadingView *circleLoadingView;
@property (nonatomic) BOOL showWeAppBrand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)delayShowLoadingProgress;
- (void)delayShowWeakNetTips;
- (void)delayCheckDownloadTunnel;
- (void)showNetworkInvalidTipsView;
- (void)updateContact:(id)a0;
- (void)configUI;
- (void)updateUI;
- (void)initView;
- (void)initSubViews;
- (void)initBackgroundView;
- (void)initLogoView;
- (void)initContactTitle;
- (void)initLoadingView;
- (void)initTagsView;
- (void)initWeAppBrandView;
- (void)initEasyBuyLogo;
- (void)initWeakNetTips;
- (BOOL)needWeakNetTips;
- (void)viewDidLayoutSubviews;
- (id)officialTagsArray;
- (BOOL)shouldShowBrandOfficialFlag;
- (BOOL)takeOverLoadFailedBehavior;
- (void)onTaskLoadingFailed;
- (void)onUpdateAppPkgProgress:(float)a0 remainingTime:(unsigned long long)a1 totalLength:(unsigned long long)a2 withAppInfoData:(id)a3;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)capsuleMenuHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleMenuOriginalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleMenuFrame;
- (long long)capsuleMenuStyleMode;
- (BOOL)systemCoverViewHidden;
- (void)initPlayableView;
- (void).cxx_destruct;

@end
