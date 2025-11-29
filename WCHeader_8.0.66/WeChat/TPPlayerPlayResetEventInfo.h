@class TPDynamicStatisticParams, TPGeneralPlayFlowParams;

@interface TPPlayerPlayResetEventInfo : TPPlayerEventInfo

@property (retain, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams;
@property (retain, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams;

- (id)init;
- (void).cxx_destruct;

@end
