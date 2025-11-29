@class AWETeenGeneralIPAlbumCardModel;

@interface AWETeenGeneralIPAlbumSectionController : AWETeenGeneralBaseSectionController

@property (retain, nonatomic) AWETeenGeneralIPAlbumCardModel *model;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (BOOL)playEnable;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
