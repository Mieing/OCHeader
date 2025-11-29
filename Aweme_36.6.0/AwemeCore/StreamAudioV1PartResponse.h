@class StreamAudioV1PartResponse_Data;

@interface StreamAudioV1PartResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StreamAudioV1PartResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
