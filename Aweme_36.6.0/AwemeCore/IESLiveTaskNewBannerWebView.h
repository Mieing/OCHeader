@class NSString, HTSLiveTaskBannerStore, UIView, IESLiveBannerListModel;
@protocol IESLiveRoomService, IESHYContainerProtocol, IESLiveTaskBannerViewNewDelegate;

@interface IESLiveTaskNewBannerWebView : UIView <IESHYHybridViewLifecycleProtocol, IESLivePKStateAction, HTSLivePluginLayoutView>

@property (retain, nonatomic) HTSLiveTaskBannerStore *store;
@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) IESLiveBannerListModel *banner;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) double startTime;
@property (nonatomic) double createModelTime;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (weak, nonatomic) id<IESLiveTaskBannerViewNewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)switchWebViewBlankDetect:(BOOL)a0 webView:(id)a1;
- (void)didFinishLoad;
- (BOOL)viewShouldAllowLoadWithResponse:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)FullLinkTrackEventWithName:(id)a0 params:(id)a1;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)renderBanners:(id)a0;
- (void)trackBannerLoadFinish;
- (BOOL)isLynxUsed;
- (void)addAdditionJSB;
- (void)loadHybridContainerWithURL:(id)a0;
- (void)resizeContainerWidth:(double)a0;
- (void)traceVSProgramBannerWithEvent:(id)a0 errorCode:(long long)a1;
- (void)refreshPKStatus:(BOOL)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)orientationChanged:(long long)a0;
- (id)viewType;
- (id)initWithStore:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
