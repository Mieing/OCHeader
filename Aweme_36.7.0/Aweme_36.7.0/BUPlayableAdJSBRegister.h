@protocol BUPlayableAdJSBRegisterDelegate;

@interface BUPlayableAdJSBRegister : NSObject

@property (weak, nonatomic) id<BUPlayableAdJSBRegisterDelegate> delegate;

- (id)plugin:(id)a0 excuteJSBMethod:(id)a1 params:(id)a2;
- (void)registerPlugins:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)registerPlugin:(id)a0;

@end
