@class NSString;

@interface IESIMBulletContainerReusePoolConfig : NSObject

@property (copy, nonatomic) NSString *poolID;
@property (nonatomic) unsigned long long maxCost;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long reusePoolsTotalSize;
@property (nonatomic) long long singleListCountLimit;
@property (nonatomic) double ageLimitTime;
@property (nonatomic) long long memoryClearTime;
@property (nonatomic) BOOL memoryClearWhenEnterBackground;
@property (copy, nonatomic) id /* block */ reuseIdentifierRuleBlock;

- (void).cxx_destruct;

@end
