@protocol AWESearchLynxBounceViewDelegate;

@interface AWESearchLynxBounceView : LynxUIView

@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) float space;
@property (weak, nonatomic) id<AWESearchLynxBounceViewDelegate> delegate;

+ (id)__lynx_prop_config__401;
+ (id)__lynx_prop_config__240;

- (void)space:(float)a0 requestReset:(BOOL)a1;
- (void)direction:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)frameDidChange;

@end
