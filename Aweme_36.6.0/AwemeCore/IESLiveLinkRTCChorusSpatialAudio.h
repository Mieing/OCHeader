@class NSArray, NSMutableDictionary, NSString;

@interface IESLiveLinkRTCChorusSpatialAudio : NSObject

@property (nonatomic) BOOL enableChorusSpatialAudio;
@property (copy, nonatomic) NSArray *cacheSingerList;
@property (retain, nonatomic) NSMutableDictionary *chorusSpatialAudioPositionUserMap;
@property (retain, nonatomic) NSMutableDictionary *chorusSpatialAudioPositionIndexMap;
@property (copy, nonatomic) NSString *leaderUID;
@property (nonatomic) BOOL isChorusScene;
@property (nonatomic) int posCount;

- (void)setLeaderSingerUid:(id)a0;
- (void)setRealTimeChorusScene:(BOOL)a0;
- (void)enableChorusSpatialAudio:(long long)a0 spatialAudioDistanceParam:(int)a1;
- (void)disableChorusSpatialAudio;
- (void)updateSingerList:(id)a0;
- (void)updateChorusSpatialAudioConfig:(id)a0;
- (void)updateChorusSpatialAudioPositionIndexMap:(long long)a0 spatialAudioDistanceParam:(int)a1;
- (void)updateChorusSpatialAudioPositionUserMap;
- (id)getChorusPosition:(int)a0 layout:(long long)a1 spatialAudioDistanceParam:(int)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
