@class IESGCPCGLynxView;

@interface IESGCPCGLynxElement : LynxUI

@property (retain, nonatomic) IESGCPCGLynxView *lynxView;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__461;

- (void)snapshot:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
