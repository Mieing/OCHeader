@class RingToneVideoFeedViewController, NSMutableArray, NSMutableSet;

@interface RingToneVideoFeedViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *rings;
@property (nonatomic) unsigned int offset;
@property (copy, nonatomic) NSMutableSet *feedIDs;
@property (nonatomic) unsigned long long autoPlaySection;
@property (retain, nonatomic) NSMutableArray *preloadArray;
@property (weak, nonatomic) RingToneVideoFeedViewController *currentVC;

- (id)init;
- (void)refreshForTableView;
- (id)fetchRecommendRings:(unsigned long long)a0;
- (void)addRingForRecommendList:(id)a0;
- (void)preloadVideoItems:(id)a0;
- (void)stopPreloadVideoItem:(id)a0;
- (void)stopAllPreloadVideoItems;
- (void)reportRecommendRingBackExpose:(long long)a0 end:(long long)a1;
- (void)checkAutoPlayWhenFirstAppear;
- (void)checkAutoPlayWhenAppear;
- (void)checkAutoPlayWhenDataReload;
- (void)checkAutoPlayWhenScroll:(BOOL)a0;
- (void)startPlayWithIndexPath:(id)a0;
- (void)stopPlayWithIndexPath:(id)a0 fakeStop:(BOOL)a1;
- (void)stopCurrentPlay:(BOOL)a0;
- (void)stopAllPlay;
- (double)getCurrentPlayTime:(id)a0;
- (void).cxx_destruct;

@end
