@class UIButton, IESLiveBannerListModel, NSString, UIView, UILabel, IESLiveActivityBannerNativeContainer;
@protocol IESLiveRoomService, IESHYContainerProtocol, IESLiveActivityBannerViewDelegate;

@interface IESLiveActivityBannnerView : UIView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (nonatomic) BOOL isLoadSuccess;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESLiveActivityBannerNativeContainer *nativeContainer;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) IESLiveBannerListModel *bannerData;
@property (retain, nonatomic) UILabel *activeNameLabel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) double startTime;
@property (nonatomic) double createModelTime;
@property (weak, nonatomic) id<IESLiveActivityBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)switchWebViewBlankDetect:(BOOL)a0 webView:(id)a1;
- (void)retry:(id)a0;
- (BOOL)viewShouldAllowLoadWithResponse:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)FullLinkTrackEventWithName:(id)a0 params:(id)a1;
- (void)loadHybridContainer;
- (id)initWithBanner:(id)a0 forceUseHybrid:(BOOL)a1 diContext:(id)a2 delegate:(id)a3;
- (void)loadNativeContainer;
- (void)nativeContainerLoadFinished;
- (BOOL)shouldUseLynx;
- (void)trackBannerLoadFinish;
- (BOOL)isEnableRetry;
- (void)saveRoomOpenStatus:(id)a0 isOpen:(BOOL)a1;
- (id)statusNumber:(id)a0;
- (void)layoutActiveNameLabel;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)orientationChanged:(long long)a0;
- (BOOL)isOpen;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
