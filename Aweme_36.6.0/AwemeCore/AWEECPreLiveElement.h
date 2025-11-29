@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEECPreLiveElement : LynxUI <IESECMallLiveDelegate, AWELiveRoomMessage>

@property (nonatomic) BOOL mute;
@property (retain, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSString *liveData;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL bgPlay;
@property (copy, nonatomic) NSString *qualities;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSDictionary *liveRoomRawDictionary;
@property (retain, nonatomic) id toContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__810;
+ (id)__lynx_prop_config__891;
+ (id)__lynx_prop_config__932;
+ (id)__lynx_prop_config__983;
+ (id)__lynx_prop_config__1045;
+ (id)__lynx_prop_config__1116;
+ (id)__lynx_prop_config__1167;
+ (id)__lynx_prop_config__1218;
+ (id)__lynx_prop_config__1269;
+ (id)__lynx_ui_method_config__14210;
+ (id)__lynx_ui_method_config__14611;
+ (id)__lynx_ui_method_config__15012;
+ (id)__lynx_ui_method_config__15413;
+ (id)__lynx_ui_method_config__15814;

- (void)didReceiveSEI:(id)a0;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)fitMode:(id)a0 requestReset:(BOOL)a1;
- (void)enterRoom:(id)a0 withResult:(id /* block */)a1;
- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (void)registerMessage;
- (void)didError:(id)a0;
- (void)unregisterMessage;
- (void)volume:(id)a0 requestReset:(BOOL)a1;
- (id)packageAwemeModelFromLiveData;
- (void)liveData:(id)a0 requestReset:(BOOL)a1;
- (void)enterLivingRoomWithParams:(id)a0 callback:(id /* block */)a1;
- (void)didStall;
- (void)live_data:(id)a0 requestReset:(BOOL)a1;
- (void)mute:(BOOL)a0 requestReset:(BOOL)a1;
- (void)posterURL:(id)a0 requestReset:(BOOL)a1;
- (void)autoPlay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bgPlay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)qualities:(id)a0 requestReset:(BOOL)a1;
- (void)reset:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;
- (void)didStop;
- (void)didPause;
- (void)didResume;
- (void)didPlay;

@end
