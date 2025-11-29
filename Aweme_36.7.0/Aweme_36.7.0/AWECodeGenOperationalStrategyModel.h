@class NSString, NSArray;

@interface AWECodeGenOperationalStrategyModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) int priority;
@property (nonatomic) int displayInterval;
@property (nonatomic) int displayTotalTimes;
@property (nonatomic) int displayAutoExitInterval;
@property (copy, nonatomic) NSArray *displayMsgConfigModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
