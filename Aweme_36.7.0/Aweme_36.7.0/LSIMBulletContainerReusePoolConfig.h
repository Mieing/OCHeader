@class NSString;

@interface LSIMBulletContainerReusePoolConfig : NSObject

@property (copy, nonatomic) NSString *poolID;
@property (nonatomic) unsigned long long maxCost;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long singleListCountLimit;
@property (nonatomic) double ageLimitTime;
@property (nonatomic) long long memoryClearTime;
@property (nonatomic) BOOL memoryClearWhenEnterBackground;

- (void).cxx_destruct;

@end
