@class NSDictionary, SECTTNetPathConfig;
@protocol SECTTNetLogHandleStrategy;

@interface SECTTNetLogProcessor : NSObject

@property (copy, nonatomic) NSDictionary *originLog;
@property (retain, nonatomic) id<SECTTNetLogHandleStrategy> strategy;
@property (retain, nonatomic) SECTTNetPathConfig *config;

- (id)strategyForLog:(id)a0;
- (id)initWithLog:(id)a0 andPathConfig:(id)a1;
- (id)configStrategyName;
- (void).cxx_destruct;
- (id)process;

@end
