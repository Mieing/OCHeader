@class NSString, NSArray;

@interface AWEFeedTabJumpTriggerStrategyModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *strategyID;
@property (copy, nonatomic) NSArray *eventTypeArray;
@property (copy, nonatomic) NSArray *anchorTypeArray;
@property (copy, nonatomic) NSArray *bottomBarTypeArray;
@property (nonatomic) long long triggerLimit;
@property (nonatomic) long long progress;
@property (nonatomic) long long playTime;
@property (nonatomic) double videoTimeLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
