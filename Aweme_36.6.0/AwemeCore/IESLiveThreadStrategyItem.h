@class NSString;

@interface IESLiveThreadStrategyItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long frequency;
@property (nonatomic) BOOL forcePriority;
@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) unsigned int qos;
@property (nonatomic) long long strategy;

- (id)initWithThreadName:(id)a0 config:(id)a1;
- (void).cxx_destruct;

@end
