@class NSString, AWESceneAndConditionModel, NSArray;

@interface AWESceneConditionCheckResultModel : NSObject

@property (nonatomic) BOOL result;
@property (copy, nonatomic) NSString *trackerEvent;
@property (retain, nonatomic) AWESceneAndConditionModel *passCondition;
@property (retain, nonatomic) NSArray *ignoreConditions;

- (void).cxx_destruct;

@end
