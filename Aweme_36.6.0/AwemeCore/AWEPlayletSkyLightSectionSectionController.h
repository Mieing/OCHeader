@class NSDictionary, AWEPlayletSkyLightSectionCell;
@protocol AWEPlayletSkyLightSectionSectionDelegate;

@interface AWEPlayletSkyLightSectionSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWEPlayletSkyLightSectionCell *placeHolderCell;
@property (copy, nonatomic) NSDictionary *lynxInsertData;
@property (nonatomic) BOOL lynxViewHasShow;
@property (nonatomic) BOOL hasCollectSkylightOpenTime;
@property (weak, nonatomic) id<AWEPlayletSkyLightSectionSectionDelegate> delegate;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (id)cardContainerID;
- (void)lynxViewUpdateInsertData:(id)a0;
- (void)collectOpenTimeForSkylightViewIfNeeded;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
