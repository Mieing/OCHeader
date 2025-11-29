@class NSString, NSMutableSet, NSMutableArray, RingToneVideoSearchViewController;

@interface RingToneVideoSearchViewModel : NSObject

@property (nonatomic) unsigned int dataOffset;
@property (retain, nonatomic) NSMutableArray *rings;
@property (nonatomic) unsigned long long autoPlaySection;
@property (copy, nonatomic) NSMutableSet *feedIDs;
@property (copy, nonatomic) NSString *curQuery;
@property (retain, nonatomic) NSMutableArray *preloadArray;
@property (weak, nonatomic) RingToneVideoSearchViewController *currentVC;
@property (nonatomic) unsigned long long searchRequestID;

- (id)init;
- (void)clearData;
- (void)preloadVideoItems:(id)a0;
- (void)stopPreloadVideoItem:(id)a0;
- (void)stopAllPreloadVideoItems;
- (id)searchRing:(id)a0 isFirstPage:(BOOL)a1;
- (id)searchMusicRing:(id)a0;
- (void)checkAutoPlayWhenFirstAppear;
- (void)checkAutoPlayWhenAppear;
- (void)checkAutoPlayWhenDataReload;
- (void)checkAutoPlayWhenScroll:(BOOL)a0;
- (void)startPlayWithIndexPath:(id)a0;
- (void)stopPlayWithIndexPath:(id)a0 fakeStop:(BOOL)a1;
- (void)stopCurrentPlay:(BOOL)a0;
- (void)stopAllPlay;
- (double)getCurrentPlayTime:(id)a0;
- (void)reportRecommendRingBackExpose:(long long)a0 end:(long long)a1;
- (void).cxx_destruct;

@end
