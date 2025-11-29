@class NSString, AWETeenGeneralAuthorVideoCardModel;

@interface AWETeenGeneralAuthorVideoSectionController : AWETeenGeneralBaseSectionController <AWETeenGeneralPanelSectionControllerProtocol>

@property (retain, nonatomic) AWETeenGeneralAuthorVideoCardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (double)currPlaybackTime;
- (void)didUpdateToObject:(id)a0;
- (void)scrollToItem:(id)a0;
- (BOOL)playEnable;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:(long long)a0;
- (id)visibleVideoControllers;
- (id)visibleSlidesViews;
- (void)cardShow;
- (void)cellShow:(id)a0 atIndex:(long long)a1;
- (void)didClickVideoWithAwemeModel:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)canPlay;
- (void)seekToTime:(double)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
