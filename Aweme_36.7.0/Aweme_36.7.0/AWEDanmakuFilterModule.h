@class NSMutableSet;

@interface AWEDanmakuFilterModule : AWEDanmakuBaseModule

@property (retain, nonatomic) NSMutableSet *filterDanmakuContentsForReport;
@property (nonatomic) BOOL enableFilterSameDanmaku;
@property (nonatomic) BOOL enableReportFilter;
@property (nonatomic) BOOL enableShieldFilter;
@property (nonatomic) BOOL enableDislikeFilter;

+ (id)reportDanmakuModelItemIDS;
+ (id)currentUserReportedDanmakuMap;

- (void)dealloc;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (id)currentDanmakuPlayer;
- (void)initializeModule;
- (id)dislikeHandler;
- (void)updateFilterBlock;
- (void)refreshDanmakuWithShieldWordChange;
- (void)addReportDanmakuIDToCache:(id)a0;
- (BOOL)enableFilterByShieldWord;
- (BOOL)currentVideoShouldShieldDanmakuForReport;
- (BOOL)shouldShieldDanmakuForReport:(id)a0;
- (BOOL)shouldFilterByShieldWordWithDanmaku:(id)a0;
- (BOOL)shouldShieldDanmaku:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;

@end
