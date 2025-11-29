@class AWETeenGeneralAlbumCardModel, NSString;
@protocol AWETeenGeneralCardDelegate;

@interface AWETeenGeneralAlbumSectionController : AWETeenGeneralBaseSectionController <AWETeenGeneralCardProtocol>

@property (retain, nonatomic) AWETeenGeneralAlbumCardModel *model;
@property (weak, nonatomic) id<AWETeenGeneralCardDelegate> cardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (double)currPlaybackTime;
- (void)didUpdateToObject:(id)a0;
- (BOOL)playEnable;
- (id)visibleVideoControllers;
- (void)cardShow;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)canPlay;
- (void)seekToTime:(double)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
