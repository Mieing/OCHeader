@class WCFinderFluencyReportCenter, NSMutableArray;

@interface WCFinderTimelineFluencyReportManager : NSObject

@property (retain, nonatomic) WCFinderFluencyReportCenter *reportCenter;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (retain, nonatomic) NSMutableArray *infoBuffer;

+ (id)genSceneKeyWithCommentScene:(int)a0 andPullType:(unsigned long long)a1 timestamp:(unsigned long long)a2;

- (id)initWithReportCenter:(id)a0;
- (void)setEnterTimestamp:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setStartScene:(long long)a0 sceneKey:(id)a1;
- (void)setCommentScene:(int)a0 sceneKey:(id)a1;
- (BOOL)isStartSceneEnterWithSceneKey:(id)a0;
- (void)setLocalOperationFinishTime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setGetCommentDetailCGITime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setGetCommentDetailCGIFinishTime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setPullStreamCGITime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setPullHistoryCGITime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setPullCGIFinishTime:(unsigned long long)a0 sceneKey:(id)a1;
- (BOOL)isPullCGIFinished:(id)a0;
- (void)setPullCGIProfile:(id)a0 sceneKey:(id)a1;
- (void)setPullCGIFailWithSceneKey:(id)a0;
- (void)setIsFromPrefetch:(BOOL)a0 sceneKey:(id)a1;
- (void)setDebugMessage:(id)a0 sceneKey:(id)a1;
- (void)setShowUIFinishTime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setFirstFeedId:(id)a0 sceneKey:(id)a1;
- (void)setFirstVideoMediaId:(id)a0 sceneKey:(id)a1;
- (void)setFirstVideoWithMediaId:(id)a0 preloadStartTime:(unsigned long long)a1 sceneKey:(id)a2;
- (void)setFirstVideoWithMediaId:(id)a0 preloadFinishTime:(unsigned long long)a1 sceneKey:(id)a2;
- (void)setFirstVideoWithMediaId:(id)a0 startPlayTime:(unsigned long long)a1 sceneKey:(id)a2;
- (void)setPullStatus:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setLoadingStartTime:(unsigned long long)a0 sceneKey:(id)a1;
- (void)setLoadingEndTime:(unsigned long long)a0 sceneKey:(id)a1;
- (id)getStoredMediaIdWithSceneKey:(id)a0;
- (void).cxx_destruct;

@end
