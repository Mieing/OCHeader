@class NSString, AWESearchLynxHorizontalVideoListV2ElementView;

@interface AWESearchLynxHorizontalVideoListV2Element : LynxUI <AWESearchLynxHorizontalVideoListV2ViewDelegate>

@property (retain, nonatomic) AWESearchLynxHorizontalVideoListV2ElementView *listView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__542;
+ (id)__lynx_prop_config__451;
+ (id)__lynx_prop_config__350;
+ (id)__lynx_ui_method_config__963;
+ (id)__lynx_ui_method_config__1004;

- (void)data:(id)a0 requestReset:(BOOL)a1;
- (void)sessionid:(id)a0 requestReset:(BOOL)a1;
- (void)bounce:(BOOL)a0 requestReset:(BOOL)a1;
- (void)becomeactive:(id)a0 withResult:(id /* block */)a1;
- (void)resignactive:(id)a0 withResult:(id /* block */)a1;
- (void)displayCellWithIndex:(long long)a0 type:(id)a1;
- (void)clickCellWithIndex:(long long)a0 type:(id)a1;
- (void)scrollToBounce;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (id)createView;

@end
