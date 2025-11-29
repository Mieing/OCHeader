@class LolaDrawCommandFactory;

@interface LolaCanvas : LynxUI

@property (retain, nonatomic) LolaDrawCommandFactory *commandFactory;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__811;
+ (id)__lynx_ui_method_config__892;

- (void)flush:(id)a0 withResult:(id /* block */)a1;
- (void)append:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
