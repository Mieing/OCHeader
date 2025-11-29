@class NSNumber, AWELiveNearbyTV, AWELiveEpisodeExtra;

@interface AWELiveRoom : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (nonatomic) BOOL isAudioLive;
@property (retain, nonatomic) NSNumber *interactiveEnabled;
@property (readonly, nonatomic) AWELiveNearbyTV *nearbyTV;
@property (retain, nonatomic) AWELiveEpisodeExtra *episodeExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
