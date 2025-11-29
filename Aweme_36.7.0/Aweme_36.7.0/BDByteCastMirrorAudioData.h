@class NSData;

@interface BDByteCastMirrorAudioData : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int sampleRate;
@property (nonatomic) long long pts;

- (void).cxx_destruct;

@end
