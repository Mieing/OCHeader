@class NSMutableDictionary;

@interface IESGurdDelegateDispatcherManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dispatcherDictionary;

+ (id)sharedManager;

- (void)registerDelegate:(id)a0 forProtocol:(id)a1;
- (void)unregisterDelegate:(id)a0 forProtocol:(id)a1;
- (id)dispatcherForProtocol:(id)a0;
- (id)dispatcherForProtocol:(id)a0 createIfNeeded:(BOOL)a1;
- (void).cxx_destruct;

@end
