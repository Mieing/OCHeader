@class NSString, NSDictionary, UIView;
@protocol AWECommentEvaluationCoreServiceProtocol;

@interface AWECommentEvaluationLynxView : LynxUI

@property (retain, nonatomic) UIView<AWECommentEvaluationCoreServiceProtocol> *lynxView;
@property (nonatomic) BOOL didConfig;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) NSString *containerTag;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *config;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__681;
+ (id)__lynx_prop_config__882;
+ (id)__lynx_prop_config__1003;
+ (id)__lynx_prop_config__1074;
+ (id)__lynx_ui_method_config__1165;
+ (id)__lynx_ui_method_config__1246;

- (void)observeEvent;
- (void)setConfig:(id)a0 requestReset:(BOOL)a1;
- (void)setData:(id)a0 requestReset:(BOOL)a1;
- (void)setTheme:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setContainerTag:(id)a0 requestReset:(BOOL)a1;
- (void)fetchData:(id)a0 withResult:(id /* block */)a1;
- (void)cleanData:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)render:(id)a0;
- (id)createView;

@end
