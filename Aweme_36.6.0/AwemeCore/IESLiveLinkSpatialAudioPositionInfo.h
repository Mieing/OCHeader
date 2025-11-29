@class IESLiveLinkSpatialAudioHumanOrientation, IESLiveLinkSpatialAudioPosition;

@interface IESLiveLinkSpatialAudioPositionInfo : NSObject

@property (retain, nonatomic) IESLiveLinkSpatialAudioPosition *position;
@property (retain, nonatomic) IESLiveLinkSpatialAudioHumanOrientation *humanOrientation;

- (void).cxx_destruct;

@end
