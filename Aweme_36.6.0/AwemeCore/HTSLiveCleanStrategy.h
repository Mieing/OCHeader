@class NSString;

@interface HTSLiveCleanStrategy : IESLivePBBaseMessage

@property (nonatomic) int cleanType;
@property (copy, nonatomic) NSString *assetPoolType;
@property (nonatomic) long long keepAliveTime;

+ (id)descriptor;

- (long long)keepAliveTime;
- (id)assetPoolType;

@end
