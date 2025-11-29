@class UIView, NSMutableDictionary, NSString, TPPlayerQueue, TPPlayerDataSource, NSMutableArray, TPLoopbackParams;

@interface TPPlaybackParams : NSObject

@property (retain, nonatomic) NSMutableDictionary *optionalConfig;
@property (retain, nonatomic) NSMutableArray *trackList;
@property (retain, nonatomic) NSMutableDictionary *selectedTrackInfo;
@property (retain, nonatomic) NSMutableDictionary *selectedTrackOpaque;
@property (retain, nonatomic) TPPlayerDataSource *dataSource;
@property (retain, nonatomic) TPLoopbackParams *loopbackParams;
@property (retain, nonatomic) UIView *playerView;
@property (nonatomic) double playSpeedRatio;
@property (nonatomic) double audioGainRatio;
@property (nonatomic) BOOL outputMute;
@property (copy, nonatomic) NSString *audioNormalizeVolumeParams;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;
@property (nonatomic) BOOL enableResourceLoader;
@property (nonatomic) long long seekPositionMs;
@property (nonatomic) long long seekType;
@property (retain, nonatomic) TPPlayerQueue *playerQueue;
@property (nonatomic) long long playerScene;
@property (nonatomic) unsigned long long videoGravity;
@property (nonatomic) unsigned long long externalPlaybackVideoGravity;

- (id)init;
- (void)reset;
- (void)resetForRetry;
- (void)resetForStop;
- (void)setUrlDataSource:(id)a0;
- (void)setMediaAsset:(id)a0;
- (void)addOptionalParams:(id)a0;
- (void)addSubtitleSource:(id)a0 mimeType:(id)a1 name:(id)a2 httpHeader:(id)a3;
- (void)addAudioTrackSource:(id)a0 name:(id)a1 httpHeader:(id)a2;
- (void)setLoopback:(BOOL)a0 startPositionMs:(long long)a1 endPositionMS:(long long)a2;
- (void)saveSelectedTrackInfo:(id)a0 withOpaque:(long long)a1;
- (void)removeSelectedTrackAtIndex:(unsigned long long)a0;
- (void)syncAllTracks:(id)a0;
- (id)selectedTrackInfoForType:(unsigned long long)a0;
- (long long)selectedTrackOpaqueForType:(unsigned long long)a0;
- (BOOL)isDataSourceValid;
- (BOOL)isSeekPositionValid;
- (id)allOptionParams;
- (id)allTrackList;
- (long long)longOptionalParamValueForKey:(unsigned long long)a0;
- (long long)boolOptionalParamValueForKey:(unsigned long long)a0;
- (id)stringOptionalParamValueForKey:(unsigned long long)a0;
- (id)queueIntOptionalParamValueForKey:(unsigned long long)a0;
- (id)queueStringOptionalParamValueForKey:(unsigned long long)a0;
- (id)getOptionalParamForKey:(unsigned long long)a0;
- (void).cxx_destruct;

@end
