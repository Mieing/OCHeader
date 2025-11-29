@interface LynxBounceView : LynxUIView

@property (nonatomic) unsigned long long direction;
@property (nonatomic) float space;
@property (nonatomic) double triggerBounceEventDistance;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__251;
+ (id)__lynx_prop_config__372;

- (void)direction:(id)a0 requestReset:(BOOL)a1;
- (void)setTriggerBounceEventDistance:(double)a0 requestReset:(BOOL)a1;
- (id)init;

@end
