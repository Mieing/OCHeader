@class AWETeenGeneralVideoCardModel;

@interface AWETeenGeneralSingleVideoSectionController : AWETeenGeneralBaseSectionController

@property (retain, nonatomic) AWETeenGeneralVideoCardModel *model;

- (id)cellForItemAtIndex:(long long)a0;
- (double)currPlaybackTime;
- (void)didUpdateToObject:(id)a0;
- (BOOL)playEnable;
- (id)visibleVideoControllers;
- (void)didDoubleClickVideoWithAwemeModel:(id)a0 isCancel:(BOOL)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)canPlay;
- (void)seekToTime:(double)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
