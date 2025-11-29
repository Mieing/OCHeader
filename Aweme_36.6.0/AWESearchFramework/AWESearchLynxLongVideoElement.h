@class NSString, AWENoxusLongVideoDetailResponseModel;
@protocol SearchDynamicElementStatusDelegate;

@interface AWESearchLynxLongVideoElement : LynxUI <AWESearchLynxElementPlayerDelegate, AWESearchLynxElementViewProtocol, SearchDynamicElementProtocol>

@property (retain, nonatomic) AWENoxusLongVideoDetailResponseModel *longAwemeModel;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL attachedSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) long long transitionIndex;

+ (id)__lynx_prop_config__1182;
+ (id)__lynx_prop_config__1486;
+ (id)__lynx_prop_config__940;
+ (id)__lynx_prop_config__1031;
+ (id)__lynx_prop_config__1233;
+ (id)__lynx_prop_config__1304;
+ (id)__lynx_prop_config__1395;
+ (id)__lynx_ui_method_config__1617;
+ (id)__lynx_ui_method_config__1698;
+ (id)__lynx_ui_method_config__1759;
+ (id)__lynx_ui_method_config__17910;

- (void)setSign:(long long)a0;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)propsDidUpdate;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)logExtra:(id)a0 requestReset:(BOOL)a1;
- (void)fitMode:(id)a0 requestReset:(BOOL)a1;
- (void)didPlayError:(id)a0;
- (void)didStartStall;
- (void)onNodeReady;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (BOOL)isMediaSourceCard;
- (void)repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)sessionid:(id)a0 requestReset:(BOOL)a1;
- (void)attachContainerIDAsync:(id)a0;
- (void)elementDidFinishBind;
- (void)attachContainerID;
- (void)bindContainerID;
- (void)btm_info:(id)a0 requestReset:(BOOL)a1;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (id)getLynxElementType;
- (void)playbackRate:(id)a0 requestReset:(BOOL)a1;
- (void)longAweme:(id)a0 requestReset:(BOOL)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)didEnd;
- (id)videoView;
- (void)didResignActive;
- (void)didStart;
- (id)createView;
- (void)didStop;
- (void)updateModel:(id)a0;
- (void)didPause;

@end
