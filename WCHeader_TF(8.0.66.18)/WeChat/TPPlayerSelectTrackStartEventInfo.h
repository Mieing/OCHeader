@class TPTrackInfo;

@interface TPPlayerSelectTrackStartEventInfo : TPPlayerEventInfo

@property (nonatomic) long long trackIndex;
@property (nonatomic) long long opaque;
@property (retain, nonatomic) TPTrackInfo *trackInfo;

- (id)init;
- (void).cxx_destruct;

@end
