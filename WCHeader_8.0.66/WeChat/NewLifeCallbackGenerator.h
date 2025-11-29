@interface NewLifeCallbackGenerator : NSObject

@property (copy, nonatomic) id /* block */ callbackGenerateHandler;

- (void)registerListenerForCommand:(id)a0 userInfo:(id)a1;
- (void)registerListenerForCommand:(id)a0 keyList:(id)a1 userInfo:(id)a2;
- (void)onGenerateCallback:(id)a0 forCommand:(id)a1;
- (void).cxx_destruct;

@end
