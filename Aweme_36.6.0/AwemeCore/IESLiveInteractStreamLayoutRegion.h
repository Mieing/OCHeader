@class IESLiveInteractSpatialAudioPosition, NSString;

@interface IESLiveInteractStreamLayoutRegion : NSObject <NSCopying>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL muteAudio;
@property (retain, nonatomic) IESLiveInteractSpatialAudioPosition *spatialPosition;
@property (nonatomic) BOOL applySpatialAudio;
@property (copy, nonatomic) NSString *strUID;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceCrop;
@property (copy, nonatomic) NSString *wtnStreamID;
@property (nonatomic) BOOL videoEnhancement;
@property (nonatomic) BOOL ignoreRtcSei;
@property (nonatomic) double volume;
@property (nonatomic) long long superResolutionMode;
@property (nonatomic) long long streamIndex;
@property (nonatomic) BOOL isFromRoomEx;
@property (nonatomic) BOOL isFromRoomEx2;
@property (nonatomic) unsigned long long renderMode;
@property (nonatomic) unsigned long long streamType;
@property (nonatomic) BOOL setMediaType;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *effectTextureKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
