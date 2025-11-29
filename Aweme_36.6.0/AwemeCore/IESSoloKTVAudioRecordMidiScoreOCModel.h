@interface IESSoloKTVAudioRecordMidiScoreOCModel : NSObject <NSMutableCopying>

@property (nonatomic) double userPitch;
@property (nonatomic) double refPitch;
@property (nonatomic) double sentenceScore;
@property (nonatomic) int sentenceIndex;
@property (nonatomic) double timeMilliseconds;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
