@class NSLock, NSMutableDictionary;

@interface IESECTabKitTransitionManager : NSObject {
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *registeredTransition;

+ (id)sharedInstance;

- (void)registerTransitionType:(unsigned long long)a0 targetProtocol:(id)a1;
- (id)targetProtocolForTransitionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
