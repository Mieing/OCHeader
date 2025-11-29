@class NSString, IESEffectModel;

@interface ACCMVAudioBeatTrackManager : NSObject

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (nonatomic) float srcIn;
@property (nonatomic) float srcOut;
@property (nonatomic) float dstIn;
@property (nonatomic) float dstOut;
@property (nonatomic) BOOL isAudioBeatTrack;
@property (copy, nonatomic) NSString *musicFileName;

- (void)configAudioBeatTrackManagerWithMVEffectModel:(id)a0;
- (id)initWithMVEffectModel:(id)a0;
- (id)modelRelativePathForAlgorithm;
- (void).cxx_destruct;

@end
