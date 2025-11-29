@class NSString, SearchModelIndex;
@protocol SearchDynamicElementStatusDelegate;

@interface SearchVideoElement : LynxUI <SearchDynamicElementProtocol>

@property (nonatomic) BOOL needUpdateModelFlag;
@property (nonatomic) BOOL attachedSessionId;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) SearchModelIndex *modelIndex;
@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1383;
+ (id)__lynx_prop_config__1141;
+ (id)__lynx_prop_config__1484;
+ (id)__lynx_prop_config__1020;
+ (id)__lynx_prop_config__1282;
+ (id)__lynx_prop_config__1535;
+ (id)__lynx_prop_config__1626;
+ (id)__lynx_prop_config__1707;
+ (id)__lynx_prop_config__1798;
+ (id)__lynx_prop_config__1849;
+ (id)__lynx_prop_config__19110;
+ (id)__lynx_prop_config__19611;
+ (id)__lynx_ui_method_config__27812;
+ (id)__lynx_ui_method_config__28213;
+ (id)__lynx_ui_method_config__28714;

- (void)setSign:(long long)a0;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)propsDidUpdate;
- (void)logExtra:(id)a0 requestReset:(BOOL)a1;
- (void)poster:(id)a0 requestReset:(BOOL)a1;
- (void)fitMode:(id)a0 requestReset:(BOOL)a1;
- (void)didPlayError:(id)a0;
- (void)didStartStall;
- (void)onNodeReady;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (BOOL)isMediaSourceCard;
- (void)repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)didSeekEnd:(BOOL)a0;
- (void)inittime:(id)a0 requestReset:(BOOL)a1;
- (void)muted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)updateModelWithIndex:(id)a0;
- (void)awemeindex:(id)a0 requestReset:(BOOL)a1;
- (void)cachekey:(id)a0 requestReset:(BOOL)a1;
- (void)sessionid:(id)a0 requestReset:(BOOL)a1;
- (void)containerid:(id)a0 requestReset:(BOOL)a1;
- (void)sendLoadingEvent;
- (void)attachContainerIDAsync:(id)a0;
- (void)elementDidFinishBind;
- (void)attachContainerID;
- (void)bindContainerID;
- (void)btm_info:(id)a0 requestReset:(BOOL)a1;
- (void)showprogressbar:(BOOL)a0 requestReset:(BOOL)a1;
- (id)getLynxElementType;
- (void)playerPlayTime:(double)a0 totalTime:(double)a1;
- (void)updateVideoList:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)stop;
- (void)didEnd;
- (id)videoView;
- (void)didResignActive;
- (id)tagName;
- (void)didStart;
- (void)didPause;

@end
