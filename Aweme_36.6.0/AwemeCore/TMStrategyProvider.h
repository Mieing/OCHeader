@class NSString;

@interface TMStrategyProvider : NSObject <BDStrategyProvider>

@property (copy, nonatomic) NSString *lastActiveSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)signatureFromStrategies:(id)a0;
- (void)handleConfigUpdate;
- (void).cxx_destruct;
- (id)displayName;
- (id)init;
- (long long)priority;
- (void)dealloc;
- (id)strategies;

@end
