@class CgiProfileClockData, NewLifeStreamResponse, CgiTraceClockData;

@interface FlowLoadDataResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned long long requestId;
@property (nonatomic) unsigned long long nativeCgiCostTime;
@property (retain, nonatomic) NewLifeStreamResponse *streamResponse;
@property (retain, nonatomic) CgiTraceClockData *traceClockData;
@property (retain, nonatomic) CgiProfileClockData *profileClockData;

+ (void)initialize;

@end
