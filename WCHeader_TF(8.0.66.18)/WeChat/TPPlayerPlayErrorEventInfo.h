@class TPDynamicStatisticParams, TPGeneralPlayFlowParams;

@interface TPPlayerPlayErrorEventInfo : TPPlayerEventInfo

@property (nonatomic) long long errorType;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams;
@property (retain, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams;

- (id)init;
- (void).cxx_destruct;

@end
