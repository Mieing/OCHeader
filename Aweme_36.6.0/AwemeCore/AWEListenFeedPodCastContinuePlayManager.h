@class NSMutableDictionary;

@interface AWEListenFeedPodCastContinuePlayManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *progressCacheDict;
@property (nonatomic) double lastWriteDiskTimestamp;
@property (nonatomic) BOOL enableToUpdate;

+ (id)storageKey;
+ (double)recordFrequencyLimit;
+ (long long)maxRecordCount;

- (void)readRecordFromDisk;
- (void)clearInValidRecord;
- (void)savePodCastAudioProgressWithItemID:(id)a0 currentPlaybackTime:(double)a1 videoDuration:(double)a2;
- (double)getPodCastPlayTimeWithModel:(id)a0;
- (id)storageRecordIdWithItemId:(id)a0;
- (void)updateToDisk:(id)a0;
- (void).cxx_destruct;

@end
