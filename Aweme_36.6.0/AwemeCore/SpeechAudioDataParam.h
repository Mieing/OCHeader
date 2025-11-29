@class NSData, AudioDataPayloadParam;

@interface SpeechAudioDataParam : NSObject

@property (nonatomic) int dataType;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *refData;
@property (retain, nonatomic) AudioDataPayloadParam *payloadParam;

- (void)dealloc;

@end
