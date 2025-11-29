@class HMDThreadSafeDictionary, NSMutableDictionary, NSMutableSet;

@interface AWEVideoPlayTimeRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *timeDic;
@property (retain, nonatomic) NSMutableDictionary *maxTimeDic;
@property (retain, nonatomic) NSMutableDictionary *loopDic;
@property (retain, nonatomic) NSMutableDictionary *loopCountDic;
@property (retain, nonatomic) NSMutableSet *landscapeRecordArray;
@property (retain, nonatomic) HMDThreadSafeDictionary *watchTimeDic;
@property (retain, nonatomic) HMDThreadSafeDictionary *finishDic;

+ (id)sharedInstance;

- (void)recordIdentifer:(id)a0 playTime:(double)a1;
- (double)getPlayTime:(id)a0;
- (void)recordIdentifer:(id)a0 playTime:(double)a1 loop:(BOOL)a2;
- (BOOL)getLoop:(id)a0;
- (long long)getLoopCount:(id)a0;
- (void)clearLoopCount:(id)a0;
- (double)getMaxPlayTime:(id)a0;
- (void)addLandscapeRecordIdentifer:(id)a0;
- (void)removeLandscapeRecord;
- (long long)recordVideoCount;
- (void)recordIdentifer:(id)a0 maxWatchTime:(double)a1;
- (double)getMaxWatchTime:(id)a0;
- (void)removeWatchTime:(id)a0;
- (BOOL)hasFinishRecord:(id)a0;
- (BOOL)hasWatchTimeRecord:(id)a0;
- (void)removeFinishRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
