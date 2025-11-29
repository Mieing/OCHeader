@interface LSSStrategyABR : LSSBaseStrategy

+ (id)defaultStrategyInstance;

- (id)runLocalStrategy:(id)a0;
- (id)runSmartStrategy:(id)a0;
- (id)initStrategy;
- (id)runStrategy:(id)a0;

@end
