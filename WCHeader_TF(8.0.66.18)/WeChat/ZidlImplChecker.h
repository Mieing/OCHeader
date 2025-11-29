@interface ZidlImplChecker : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)checkZidlImpl:(id)a0 callback:(id)a1;
- (void)zidlImplIsReady:(id)a0;

@end
