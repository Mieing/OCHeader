@interface BDPGameLynxEventManager : NSObject

@property (retain, nonatomic) id subscriber;

+ (id)shareManager;

- (void)registerMessage;
- (void)unregisterMessage;
- (void)handleEventSetInterfaceOrientationMask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
