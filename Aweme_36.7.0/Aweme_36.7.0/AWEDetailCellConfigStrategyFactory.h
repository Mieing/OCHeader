@class NSMutableArray;

@interface AWEDetailCellConfigStrategyFactory : NSObject

@property (retain, nonatomic) NSMutableArray *strategyClassArray;

- (void)setupStrategyMap;
- (void)addStrategyClass:(id)a0;
- (id)strategyForContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
