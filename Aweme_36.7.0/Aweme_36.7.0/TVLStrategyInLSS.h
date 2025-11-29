@class NSString, NSDictionary, NSTimer, NSObject;
@protocol OS_dispatch_source, TVLStrategyInLSSDelegate;

@interface TVLStrategyInLSS : NSObject {
    NSTimer *_strategyTimer;
    NSObject<OS_dispatch_source> *_gcdTimer;
}

@property (weak, nonatomic) id<TVLStrategyInLSSDelegate> delegate;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL repeat;
@property (nonatomic) BOOL shouldFallBackToPlayerAbrStrategy;
@property (nonatomic) long long time;
@property (nonatomic) long long runningType;
@property (copy, nonatomic) NSDictionary *strategyPredictRes;
@property (copy, nonatomic) NSDictionary *rowData;

- (void)reloadConfig;
- (void)stopStrategy;
- (void)callStrategy:(id)a0;
- (void)startStrategy:(id)a0 async:(BOOL)a1;
- (void)startStrategy:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
