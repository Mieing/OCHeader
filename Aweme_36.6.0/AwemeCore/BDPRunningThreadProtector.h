@class NSMutableDictionary;

@interface BDPRunningThreadProtector : NSObject

@property (retain) NSMutableDictionary *callbackMap;
@property BOOL enabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)registCurrentThread:(id /* block */)a0;
- (void)unregistCurrentThread;
- (void)unregistThread:(id)a0;
- (void)notify:(id)a0 type:(id)a1 thread:(unsigned int)a2;
- (void).cxx_destruct;
- (void)notify:(id)a0;
- (id)init;

@end
