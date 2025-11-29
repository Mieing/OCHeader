@class IESLiveInteractSpatialAudioOrientation;

@interface IESLiveInteractSpatialAudioHumanOrientation : NSObject

@property (retain, nonatomic) IESLiveInteractSpatialAudioOrientation *forward;
@property (retain, nonatomic) IESLiveInteractSpatialAudioOrientation *right;
@property (retain, nonatomic) IESLiveInteractSpatialAudioOrientation *up;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
