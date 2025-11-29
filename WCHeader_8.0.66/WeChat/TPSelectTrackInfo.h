@class TPTrackInfo;

@interface TPSelectTrackInfo : NSObject

@property (nonatomic) long long selectTrackId;
@property (nonatomic) long long selectTrackStartTimeSinceBootMs;
@property (retain, nonatomic) TPTrackInfo *trackInfo;

- (void).cxx_destruct;

@end
