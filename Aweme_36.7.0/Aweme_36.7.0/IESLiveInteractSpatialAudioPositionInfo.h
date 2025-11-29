@class IESLiveInteractSpatialAudioPosition, IESLiveInteractSpatialAudioHumanOrientation;

@interface IESLiveInteractSpatialAudioPositionInfo : NSObject

@property (retain, nonatomic) IESLiveInteractSpatialAudioPosition *position;
@property (retain, nonatomic) IESLiveInteractSpatialAudioHumanOrientation *humanOrientation;
@property (nonatomic) BOOL applySpatialAudio;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
