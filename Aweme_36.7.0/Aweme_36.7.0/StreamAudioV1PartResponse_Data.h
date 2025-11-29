@class NSString, NSData;

@interface StreamAudioV1PartResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int id_p;
@property (copy, nonatomic) NSString *format;
@property (nonatomic) int rate;
@property (nonatomic) int bits;
@property (nonatomic) int channels;
@property (nonatomic) int audioDataPartSize;
@property (nonatomic) BOOL done;
@property (copy, nonatomic) NSString *streamId;
@property (nonatomic) int errCode;
@property (copy, nonatomic) NSData *audioData;

+ (id)descriptor;

@end
