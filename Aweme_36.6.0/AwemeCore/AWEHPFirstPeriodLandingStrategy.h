@class NSString, AWEHPFirstPeriodLandingModel;
@protocol AWEHPLandingStrategyModelProtocol, AWEHPLandingContextProtocol;

@interface AWEHPFirstPeriodLandingStrategy : NSObject <AWEHPLandingStrategyProtocol>

@property (retain, nonatomic) id<AWEHPLandingContextProtocol> context;
@property (retain, nonatomic) id<AWEHPLandingStrategyModelProtocol> strategy;
@property (retain, nonatomic) AWEHPFirstPeriodLandingModel *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLandingContext:(id)a0;
- (BOOL)shouldStrategyEffect;
- (id)getLandingScheduledModel;
- (void)endLandingWithSuccess:(BOOL)a0;
- (id)p_readRecordWithConfig:(id)a0;
- (long long)p_generateCycleWithTimeInterval:(double)a0;
- (void)p_writeRecord:(id)a0;
- (void).cxx_destruct;

@end
