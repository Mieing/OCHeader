@class NSArray, TPStrategyConfig, NSString;

@interface TPBaseStrategy : NSObject <ITPStrategy>

@property (retain, nonatomic) TPStrategyConfig *config;
@property (copy, nonatomic) NSArray *contextList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyWithConfig:(id)a0;

- (id)init;
- (BOOL)shouldRetry;
- (id)lastContext;
- (long long)playerTypeForOpen:(id)a0;
- (long long)playerTypeForRetry:(id)a0;
- (void)addStrategyContext:(id)a0;
- (id)defultPlayerTypeList;
- (BOOL)isPlayerTypeValidForCurrentPlayerScene;
- (void).cxx_destruct;

@end
