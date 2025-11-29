@interface IESGCPRequestDispatchStrategy : NSObject

@property (nonatomic) long long strategyType;
@property (nonatomic) long long maxRetryTimes;
@property (nonatomic) long long minRandomMs;
@property (nonatomic) long long maxRandomMs;

@end
