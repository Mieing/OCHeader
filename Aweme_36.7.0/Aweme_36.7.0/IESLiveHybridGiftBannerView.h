@class IESLiveGiftBannerViewModel, NSString, UIView;
@protocol IESLiveMonitor, IESLiveWebViewService, IESHYContainerProtocol, IESHYHybridViewProtocol, IESLiveWebViewProtocol, IESLiveHybridContainerFactoryAdapter;

@interface IESLiveHybridGiftBannerView : UIView <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYHybridViewProtocol> *hybridView;
@property (weak, nonatomic) UIView<IESHYHybridViewProtocol> *lynxView;
@property (weak, nonatomic) UIView<IESLiveWebViewProtocol> *webView;
@property (nonatomic) BOOL enablePackupBanner;
@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainerV2;
@property (nonatomic) int bannerContainerSwitch;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL firstScreenOpt;
@property (retain, nonatomic) IESLiveGiftBannerViewModel *banner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)lynxData;
- (BOOL)viewShouldAllowLoadWithResponse:(id)a0;
- (id)requestPage;
- (void)didFinishLoad;
- (id)loadLynxView;
- (id)getComponentsWithURLString:(id)a0;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)iesLiveHybridContainerDidFinishLoad:(id)a0;
- (void)iesLiveHybridContainer:(id)a0 loadFailWithError:(id)a1;
- (BOOL)iesLiveHybridContainer:(id)a0 shouldAllowLoadWithResponse:(id)a1;
- (void)updateBannerLynxViewForGiftID:(id)a0 extraData:(id)a1;
- (void)loadHybridContainer:(BOOL)a0;
- (void)removeCurrentHybridView;
- (id)targetURLStringForKernal:(unsigned long long)a0;
- (void)handleFallbackURLNotFound;
- (void)loadHybridViewFromFallBack:(BOOL)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)loadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 banner:(id)a1;
- (id)loadWebView;

@end
