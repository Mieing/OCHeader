@interface FormatPingResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long interval;
@property (nonatomic) int rtcState;
@property (nonatomic) long long roomMode;

+ (id)descriptor;

@end
