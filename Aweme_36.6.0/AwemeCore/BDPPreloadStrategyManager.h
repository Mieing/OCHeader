@class BDPPreloadStrategyContext, BDPPreloadStrategyResolver;

@interface BDPPreloadStrategyManager : NSObject

@property (class, nonatomic) BOOL debugMode;

@property (retain, nonatomic) BDPPreloadStrategyContext *context;
@property (retain, nonatomic) BDPPreloadStrategyResolver *resolver;
@property (nonatomic) BOOL debugEnabled;

+ (BOOL)enableLibraPreloadConfigX;
+ (id)fetchStopLossStrategy;
+ (BOOL)enableLibraPreloadConfigXForGame;
+ (id)sharedManager;

- (id)fetchStrategyResultWithName:(id)a0 andModel:(id)a1;
- (void)defaultInit;
- (id)p_fetchResultWithModel:(id)a0 andContext:(id)a1 andStrategyConfig:(id)a2;
- (void)updateConfigs;
- (id)fetchStrategyResultWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadDefaultConfig;

@end
