@class NSString, UIViewController, AWEListDataController;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol;

@interface AWEECGiftVideoElement : LynxUI <AWEAwemeDetailTableViewControllerDelegate, AWEModernFullscreenTransitionOuterContextProvider, IESVideoPlayerDelegate>

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol> *playVideoViewController;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic, getter=isAutoPlay) BOOL autoPlay;
@property (nonatomic) BOOL isDetailPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__500;
+ (id)__lynx_prop_config__721;
+ (id)__lynx_prop_config__762;
+ (id)__lynx_prop_config__843;
+ (id)__lynx_ui_method_config__1434;
+ (id)__lynx_ui_method_config__1485;
+ (id)__lynx_ui_method_config__1526;
+ (id)__lynx_ui_method_config__1567;

- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (id)modernTransitionContext;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)autoplay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (long long)preferScaleMode;
- (void)setVideoPlayerTag;
- (void)p_handleVideoChange:(id)a0;
- (void)aweme:(id)a0 requestReset:(BOOL)a1;
- (void)repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)src:(id)a0 requestReset:(BOOL)a1;
- (void)enterDetail:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;

@end
