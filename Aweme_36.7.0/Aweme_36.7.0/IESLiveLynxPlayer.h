@class NSDictionary, NSNumber, NSString;

@interface IESLiveLynxPlayer : LynxUI <IESLiveLynxPlayerDelegate>

@property (nonatomic) BOOL hidden;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL bgPlay;
@property (copy, nonatomic) NSString *qualities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__583;
+ (id)__lynx_prop_config__441;
+ (id)__lynx_ui_method_config__13313;
+ (id)__lynx_prop_config__644;
+ (id)__lynx_prop_config__532;
+ (id)__lynx_prop_config__716;
+ (id)__lynx_prop_config__797;
+ (id)__lynx_prop_config__858;
+ (id)__lynx_prop_config__929;
+ (id)__lynx_prop_config__9910;
+ (id)__lynx_prop_config__11511;
+ (id)__lynx_ui_method_config__12512;
+ (id)__lynx_ui_method_config__13814;

- (void)didReceiveSEI:(id)a0;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)onListCellDisappear:(id)a0 exist:(BOOL)a1 withList:(id)a2;
- (void)fitMode:(id)a0 requestReset:(BOOL)a1;
- (void)onListCellPrepareForReuse:(id)a0 withList:(id)a1;
- (void)onListCellAppear:(id)a0 withList:(id)a1;
- (void)didError:(id)a0;
- (void)volume:(id)a0 requestReset:(BOOL)a1;
- (void)didStall;
- (void)mute:(BOOL)a0 requestReset:(BOOL)a1;
- (void)posterURL:(id)a0 requestReset:(BOOL)a1;
- (void)autoPlay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bgPlay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)qualities:(id)a0 requestReset:(BOOL)a1;
- (void)reportLivePlayerLog:(id)a0 reportParams:(id)a1;
- (void)logExtraDict:(id)a0 requestReset:(BOOL)a1;
- (void)stream_data:(id)a0 requestReset:(BOOL)a1;
- (void)__reportLog:(id)a0 reportParam:(id)a1;
- (void)streamData:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;
- (void)didStop;
- (void)didPause;
- (void)didResume;
- (void)didPlay;

@end
