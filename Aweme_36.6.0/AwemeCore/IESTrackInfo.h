@class IESMediaData, NSString;

@interface IESTrackInfo : NSObject

@property (nonatomic) int videoTrackID;
@property (nonatomic) int realVideoTrackID;
@property (nonatomic) int audioTrackID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (retain, nonatomic) IESMediaData *mediaData;
@property (nonatomic) BOOL allAudioInOneTrack;
@property (readonly, nonatomic) NSString *inputFilterKey;
@property (nonatomic) BOOL isNeedMatting;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
