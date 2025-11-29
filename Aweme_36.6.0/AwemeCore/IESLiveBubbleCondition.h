@class NSNumber;

@interface IESLiveBubbleCondition : NSObject

@property (retain, nonatomic) NSNumber *weeklyFrequency;
@property (retain, nonatomic) NSNumber *totalTimes;
@property (retain, nonatomic) NSNumber *validityPeriod;
@property (copy, nonatomic) id /* block */ trigger;

+ (id)conditionWithTrigger:(id /* block */)a0;

- (void).cxx_destruct;

@end
