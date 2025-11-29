@class IESLiveMessageListDisplayRatioConfig;

@interface IESLiveMessageListValueStrategyConfig : NSObject

@property (retain, nonatomic) IESLiveMessageListDisplayRatioConfig *lowHeatRefreshConfig;
@property (retain, nonatomic) IESLiveMessageListDisplayRatioConfig *middleHeatRefreshConfig;
@property (retain, nonatomic) IESLiveMessageListDisplayRatioConfig *highHeatRefreshConfig;
@property (retain, nonatomic) IESLiveMessageListDisplayRatioConfig *lowHeatFoldConfig;
@property (retain, nonatomic) IESLiveMessageListDisplayRatioConfig *middleHeatFoldConfig;
@property (retain, nonatomic) IESLiveMessageListDisplayRatioConfig *highHeatFoldConfig;

- (void)setConfig:(id)a0 withRatio:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
