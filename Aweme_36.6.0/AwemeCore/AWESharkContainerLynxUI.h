@class NSString;

@interface AWESharkContainerLynxUI : LynxUI <AWESharkContainerLoadDelegate>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *initialData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__331;
+ (id)__lynx_prop_config__432;

- (void)onContainerStartLoadWithSchema:(id)a0;
- (void)onContainerLoadFinished:(id)a0;
- (void)onCardStartLoadWithCardUrl:(id)a0;
- (void)onCardLoadFinished:(id)a0 card:(id)a1;
- (void)setScheme:(id)a0 requestReset:(BOOL)a1;
- (void)setInitData:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
