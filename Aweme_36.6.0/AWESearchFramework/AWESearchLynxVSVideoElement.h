@class SearchModelIndex, NSString, AWEAwemeModel;
@protocol SearchDynamicElementStatusDelegate;

@interface AWESearchLynxVSVideoElement : LynxUI <AWESearchVSVideoViewPlayerDelegate, AWESearchLynxElementViewProtocol, SearchDynamicElementProtocol>

@property (retain, nonatomic) SearchModelIndex *awemeModelIndex;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL attachedSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) long long transitionIndex;

+ (id)__lynx_prop_config__1172;
+ (id)__lynx_prop_config__1314;
+ (id)__lynx_prop_config__1223;
+ (id)__lynx_prop_config__950;
+ (id)__lynx_prop_config__1071;
+ (id)__lynx_prop_config__1385;
+ (id)__lynx_ui_method_config__1496;
+ (id)__lynx_ui_method_config__1577;
+ (id)__lynx_ui_method_config__1638;
+ (id)__lynx_ui_method_config__1679;

- (id)liveTransitionContext;
- (id)currentAwemeModel;
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
- (void)startposition:(id)a0 requestReset:(BOOL)a1;
- (void)onNodeReady;
- (void)updateAwemeList:(id)a0;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (void)resetLivePlayer;
- (BOOL)isMediaSourceCard;
- (void)repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)updateModelWithIndex:(id)a0;
- (void)awemeindex:(id)a0 requestReset:(BOOL)a1;
- (void)sessionid:(id)a0 requestReset:(BOOL)a1;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (void)attachContainerIDAsync:(id)a0;
- (void)elementDidFinishBind;
- (void)attachContainerID;
- (void)bindContainerID;
- (id)getLynxElementType;
- (void)trackEvent:(id)a0 logExtra:(id)a1;
- (void)didChangePaidStatus:(unsigned long long)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)transitionContext;
- (void)didEnd;
- (id)videoView;
- (void)didResignActive;
- (void)didStart;
- (id)createView;
- (void)didStop;
- (void)didPause;
- (id)livePlayer;

@end
