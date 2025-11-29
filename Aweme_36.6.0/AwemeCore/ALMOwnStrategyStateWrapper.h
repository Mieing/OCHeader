@class NSString;

@interface ALMOwnStrategyStateWrapper : NSObject <TTVideoEngineStrategyStateSupplier>

@property (copy, nonatomic) id /* block */ networkSpeedblock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)getNetworkSpeedBitPerSec:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
