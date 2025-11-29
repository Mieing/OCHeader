@class NSString;

@interface XPlaySocketTracker : NSObject

@property (nonatomic) long long connectCount;
@property (nonatomic) double connectCostStart;
@property (nonatomic) double connectKeepStart;
@property (copy, nonatomic) NSString *url;

- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackSocketState:(long long)a0;
- (void)trackSocketError:(id)a0;
- (void)trackSocketOverStockInst:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
