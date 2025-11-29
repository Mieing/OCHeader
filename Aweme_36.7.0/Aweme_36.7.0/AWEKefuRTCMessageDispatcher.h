@class NSMutableDictionary;

@interface AWEKefuRTCMessageDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *listenerMap;

- (BOOL)dispatchMessage:(id)a0 errorMessage:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterListener:(id)a0;
- (void)registerListener:(id)a0;

@end
