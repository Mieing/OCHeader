@class NSMapTable;

@interface TTMultiNetwork : NSObject

@property (retain, nonatomic) NSMapTable *mObservers;

+ (id)shareInstance;

- (void)notifyMultiNetState:(int)a0 currentState:(int)a1;
- (void)notifyUserSpecifiedNetworkEnabled:(BOOL)a0;
- (void)registerMultiNetObserver:(id)a0 dispatch_queue:(id)a1;
- (void)unregisterMultiNetObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
