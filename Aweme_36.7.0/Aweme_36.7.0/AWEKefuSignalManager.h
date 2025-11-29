@class NSArray, NSMutableDictionary;

@interface AWEKefuSignalManager : NSObject

@property (nonatomic) BOOL isListenSignal;
@property (retain, nonatomic) NSMutableDictionary *listenerMap;
@property (retain, nonatomic) NSArray *signalSenders;

+ (id)sharedInstance;

- (void)sendSignalName:(id)a0;
- (void)removeListeners:(id)a0;
- (void)addListeners:(id)a0;
- (void)p_tryStartListenSignal;
- (void)p_tryEndListenSignal;
- (void).cxx_destruct;
- (id)init;

@end
