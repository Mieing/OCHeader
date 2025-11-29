@class NSMutableArray;

@interface AWEMVLandingStrategyRegister : NSObject

@property (retain, nonatomic) NSMutableArray *strategyRegisterList;

+ (void)registerLandingStrategy:(id /* block */)a0;
+ (id)activeStrategyWithLandingParams:(id)a0;
+ (id)sharedInstance;

- (void)registerStrategy:(id)a0;
- (id)createDefaultStrategy;
- (void).cxx_destruct;

@end
