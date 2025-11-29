@class NSNumber;

@interface IESECLiveReplayVolumeRecorder : NSObject

@property (retain, nonatomic) NSNumber *enterVolume;
@property (retain, nonatomic) NSNumber *startPlayVolume;

- (void)startPlay;
- (id)volumeInfo;
- (void)enterPage;
- (void).cxx_destruct;
- (id)currentVolume;

@end
