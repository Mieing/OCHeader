@protocol AWEAwemeBizPlayVideoProtocol;

@interface AWELynxSharedVideoView : LynxUI

@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> playerController;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__361;
+ (id)__lynx_ui_method_config__422;
+ (id)__lynx_ui_method_config__473;
+ (id)__lynx_ui_method_config__524;
+ (id)__lynx_ui_method_config__575;

- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)setScalingMode:(long long)a0 requestReset:(BOOL)a1;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
