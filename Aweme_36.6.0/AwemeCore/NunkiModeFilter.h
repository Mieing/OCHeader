@class NSString, NunkiStrategyRegister, AWEStorage, NSNumber;

@interface NunkiModeFilter : NSObject <NunkiMessage>

@property (retain, nonatomic) AWEStorage *mainStorage;
@property (retain, nonatomic) NSNumber *modeValid;
@property (retain, nonatomic) NunkiStrategyRegister *strategyRegister;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReceiveNunkiStrategyChangedMode:(unsigned long long)a0 isOpen:(id)a1;
- (BOOL)filteredStartOptionWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
