@class NSString;

@interface AWEPerfEvaluateStrategyManager : NSObject <AWEPerfEvaluateStrategyService>

@property (copy, nonatomic) id /* block */ scoreGetter;
@property (nonatomic) float lowMiddleJudgeScore;
@property (nonatomic) float middleHighJudgeScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
