@class NSMutableArray;

@interface AWEMVClientForceInsertStrategyRegister : NSObject

@property (retain, nonatomic) NSMutableArray *strategyRegisterList;

+ (void)registerForceInsertStrategy:(id /* block */)a0;
+ (id)createStrategyList;
+ (id)sharedInstance;

- (id)createStrategyList;
- (void)registerStrategy:(id)a0;
- (id)createStrategyWithModel:(id)a0;
- (void).cxx_destruct;

@end
