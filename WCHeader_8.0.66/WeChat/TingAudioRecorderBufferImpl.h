@class NSData, AVAudioPCMBuffer;

@interface TingAudioRecorderBufferImpl : TingAudioRecorderBufferObjc

@property (retain, nonatomic) AVAudioPCMBuffer *buffer;
@property (retain, nonatomic) NSData *pcmData;

- (void).cxx_destruct;

@end
