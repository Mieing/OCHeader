@class NSNumber, IESLiveBannerListModel, HTSEventContext, NSString, NSError, IESLiveComponentContext, UIView;
@protocol IESHYContainerProtocol, IESLiveInternalRouter, IESLiveMonitor, IESLiveWebViewProtocol, IESLiveFlexInteractBannerDelegate, IESLiveWebViewService, IESLiveHybridContainerFactoryAdapter;

@interface IESLiveFlexInteractBannerView : UIView <IESLiveHybridContainerDelegate, UIGestureRecognizerDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSError *loadError;
@property (retain, nonatomic) IESLiveComponentContext *context;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *episodeID;
@property (retain, nonatomic) IESLiveBannerListModel *banner;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) UIView<IESLiveWebViewProtocol> *webView;
@property (weak, nonatomic) id<IESLiveFlexInteractBannerDelegate> bannerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewDidCreated:(id)a0;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)renderFlexBannerWithLynxUrl:(id)a0 fallbackUrl:(id)a1;
- (void)removeCurrentWebView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)update;
- (id)initWithComponentContext:(id)a0;
- (BOOL)isPortraitMode;

@end
