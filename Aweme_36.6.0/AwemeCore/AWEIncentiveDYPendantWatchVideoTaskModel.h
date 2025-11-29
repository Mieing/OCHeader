@class AWEIncentiveDYWatchVideoTaskInfoModel, AWEIncentiveDYWatchVideoTaskExtraModel;

@interface AWEIncentiveDYPendantWatchVideoTaskModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIncentiveDYWatchVideoTaskInfoModel *taskInfoModel;
@property (retain, nonatomic) AWEIncentiveDYWatchVideoTaskExtraModel *taskExtraModel;

+ (id)taskInfoModelJSONTransformer;
+ (id)taskExtraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
