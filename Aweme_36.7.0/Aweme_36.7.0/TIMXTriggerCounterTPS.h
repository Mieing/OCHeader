@interface TIMXTriggerCounterTPS : NSObject

@property (readonly, nonatomic) long long second;
@property (nonatomic) long long count;

+ (long long)getCurrentSecond;

- (id)init;

@end
