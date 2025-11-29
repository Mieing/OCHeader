@interface IESLivePerformanceCondition : NSObject

@property (nonatomic) int factor;
@property (nonatomic) int operator;
@property (nonatomic) float value;

+ (id)transformFromDictionary:(id)a0;

@end
