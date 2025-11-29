@class NSMutableDictionary;

@interface AWEPzStrategyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *typeToRegister;

+ (id)sharedInstance;

- (BOOL)isStrategyRegister:(id)a0;
- (id)productStrategyWithStrategyModel:(id)a0;
- (void)registerAllStrategies;
- (void)registerStrategyWithModel:(id)a0;
- (id)getAllRegisterStrategies;
- (void).cxx_destruct;
- (id)init;

@end
