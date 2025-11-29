@class NSArray, NSDictionary;

@interface BDUGLuckyCounterTimerConfig : BDUGLuckyJSONModel

@property (nonatomic) double targetTsEachCount;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSDictionary *timerRules;
@property (copy, nonatomic) NSArray *timerScenes;
@property (copy, nonatomic) NSDictionary *timerSceneRules;

- (void).cxx_destruct;

@end
