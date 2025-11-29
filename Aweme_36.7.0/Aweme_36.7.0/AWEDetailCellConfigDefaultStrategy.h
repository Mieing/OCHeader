@class NSString;

@interface AWEDetailCellConfigDefaultStrategy : NSObject <AWEDetailCellConfigStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveStrategyWithContext:(id)a0;

- (id)configureCell:(id)a0 inContext:(id)a1;
- (BOOL)enableOptimizeDelayInitializeProcess:(id)a0;
- (BOOL)validModelForFirstViewInitializationOptimization:(id)a0 withReferString:(id)a1 delayFirstVideoViewInitialization:(BOOL)a2;
- (BOOL)validModelForDelayInitializeInteraction:(id)a0 withReferString:(id)a1 delayFirstVideoViewInitialization:(BOOL)a2;
- (BOOL)validModelForDelayAddInteraction:(id)a0 withReferString:(id)a1 delayFirstVideoViewInitialization:(BOOL)a2;
- (BOOL)enableDelayInitializeFirstView:(id)a0 delayFirstVideoViewInitialization:(BOOL)a1;
- (BOOL)shouldForbidResetVideoIndexPath:(id)a0 withContext:(id)a1;
- (BOOL)enableDelayInitializeFirstViewWithExp:(id)a0;
- (BOOL)shouldIgnoreAwemeTypeCheckForFirstViewInitializationOptimization:(id)a0;
- (id)awemeBlackListForFirstViewInitializationOptimization:(id)a0;
- (BOOL)enableDelayInitializeInteraction:(id)a0;
- (id)awemeBlackListForDelayInitializeInteraction:(id)a0;
- (BOOL)enableDelayAddInteractionForFirstView:(id)a0;

@end
