@class InterruptStreamAudioV1Response_Data;

@interface InterruptStreamAudioV1Response : IESLivePBBaseMessage

@property (retain, nonatomic) InterruptStreamAudioV1Response_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
