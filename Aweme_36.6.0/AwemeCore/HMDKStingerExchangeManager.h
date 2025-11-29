@class HMDStingerBlocker, NSMutableSet;

@interface HMDKStingerExchangeManager : NSObject

@property (retain, nonatomic) HMDStingerBlocker *blocker;
@property (retain, nonatomic) NSMutableSet *exchangedMethods;

+ (id)sharedInstance;

- (id)exchangeBlockWithSignature:(const char *)a0 body:(id /* block */)a1;
- (BOOL)exchangeMethod:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
