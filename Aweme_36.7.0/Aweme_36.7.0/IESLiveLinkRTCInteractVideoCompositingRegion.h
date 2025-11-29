@class NSString, IESLiveLinkSpatialAudioHumanOrientation, IESLiveLinkSpatialAudioPosition;

@interface IESLiveLinkRTCInteractVideoCompositingRegion : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) long long contentControl;
@property (copy, nonatomic) NSString *strUID;
@property (copy, nonatomic) NSString *strRID;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceCrop;
@property (retain, nonatomic) IESLiveLinkSpatialAudioPosition *spatialPosition;
@property (retain, nonatomic) IESLiveLinkSpatialAudioHumanOrientation *audienceSpatialOrientation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL applySpatialAudio;
@property (nonatomic) long long streamIndex;
@property (nonatomic) unsigned long long renderMode;
@property (copy, nonatomic) NSString *wtnStreamID;
@property (nonatomic) unsigned long long streamType;
@property (nonatomic) BOOL isFromRoomEx;
@property (nonatomic) BOOL isFromRoomEx2;
@property (nonatomic) BOOL videoEnhancement;
@property (nonatomic) BOOL ignoreRtcSei;
@property (nonatomic) double volume;
@property (nonatomic) long long superResolutionMode;
@property (copy, nonatomic) NSString *effectTextureKey;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualTo:(id)a0;

@end
