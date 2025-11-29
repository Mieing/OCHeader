@class IESECShopExtensionAreaTipView, IESECServiceProxy, NSString, IESECStoreVideoView;
@protocol IESECShopDataService, IESECShopThemeService;

@interface IESECStoreVideoController : IESECRelationController <IESECVideoDetailTransitionContextProvider, IESECStoreVideoControllerProtocol, IESECShopExtensionAreaProtocol> {
    BOOL _isViewAppear;
}

@property (retain, nonatomic) IESECStoreVideoView *videoView;
@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *themeService;
@property (retain, nonatomic) IESECShopExtensionAreaTipView *videoTipView;
@property (nonatomic) BOOL play;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)a0;

- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (long long)preferScaleMode;
- (void)setupBinding;
- (void)transitionEffect:(id /* block */)a0;
- (void)setupBindingV2;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)headerTypeDidChange:(unsigned long long)a0;
- (void)switchTheme:(unsigned long long)a0;
- (void)controllerDidLoad;
- (void)iesecshop_viewControllerIsNotTop;
- (double)extensionAreaHeight;
- (void)updateVideoInfos:(id)a0;
- (id)extensionAreaTipView;
- (id)extensionAreaView;
- (double)extensionAreaViewHeight;
- (void)slideVideo;
- (void)trackVideoShow;
- (void)transitToAwemeDetailView;
- (void)clickVideo;
- (void)expandVideoPlayerArea;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)playVideo;
- (void)pauseVideo;

@end
