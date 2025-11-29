@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEECNewVideoElement : LynxUI <IESECMallVideoDelegate>

@property (retain, nonatomic) AWEAwemeModel *singleAwemeModel;
@property (retain, nonatomic) NSDictionary *paramsDict;
@property (nonatomic) long long changeOffset;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) BOOL autoLifecycle;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (copy, nonatomic) NSString *control;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__450;
+ (id)__lynx_prop_config__601;
+ (id)__lynx_prop_config__682;
+ (id)__lynx_prop_config__733;
+ (id)__lynx_prop_config__784;
+ (id)__lynx_prop_config__835;
+ (id)__lynx_prop_config__886;
+ (id)__lynx_prop_config__1047;
+ (id)__lynx_prop_config__1118;
+ (id)__lynx_prop_config__1169;
+ (id)__lynx_ui_method_config__12110;
+ (id)__lynx_ui_method_config__12511;
+ (id)__lynx_ui_method_config__12912;
+ (id)__lynx_ui_method_config__13313;
+ (id)__lynx_ui_method_config__14614;

- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)autoplay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)logExtra:(id)a0 requestReset:(BOOL)a1;
- (void)poster:(id)a0 requestReset:(BOOL)a1;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (void)didError:(id)a0;
- (void)repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)enterDetail:(id)a0 withResult:(id /* block */)a1;
- (void)didSeekEnd:(BOOL)a0;
- (void)didStartStallWithInfo:(id)a0;
- (void)enterDetailWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)videodata:(id)a0 requestReset:(BOOL)a1;
- (void)setupVideoModel;
- (void)controlPlayerWithCommand:(id)a0;
- (void)inittime:(id)a0 requestReset:(BOOL)a1;
- (void)muted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)volume:(id)a0 requestReset:(BOOL)a1;
- (void)objectfit:(id)a0 requestReset:(BOOL)a1;
- (void)__control:(id)a0 requestReset:(BOOL)a1;
- (BOOL)isCurrentDisplayedInScreen;
- (void).cxx_destruct;
- (void)didEnd;
- (id)createView;
- (void)didStop;
- (void)didPause;
- (void)didPlay;

@end
