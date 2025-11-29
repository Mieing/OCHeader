@class IESEffectModel;

@interface IESLiveEffectStatisticsModel : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) IESEffectModel *model;

- (void).cxx_destruct;

@end
