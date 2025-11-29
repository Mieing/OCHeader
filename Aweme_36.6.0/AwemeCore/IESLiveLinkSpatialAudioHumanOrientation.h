@class IESLiveLinkSpatialAudioOrientation;

@interface IESLiveLinkSpatialAudioHumanOrientation : NSObject

@property (retain, nonatomic) IESLiveLinkSpatialAudioOrientation *forward;
@property (retain, nonatomic) IESLiveLinkSpatialAudioOrientation *right;
@property (retain, nonatomic) IESLiveLinkSpatialAudioOrientation *up;

- (void).cxx_destruct;

@end
