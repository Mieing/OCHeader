@class AWEMusicDetailInspirationModel, NSMutableSet, AWEMusicDetailInspirationSectionCollectionHeaderView;

@interface AWEMusicDetailInspirationSectionController : AWEBaseListSectionController

@property (nonatomic) BOOL ifFirstCellLoadHasTracked;
@property (nonatomic) BOOL ifFirstCoverLoadHasTracked;
@property (retain, nonatomic) NSMutableSet *markCardShowSet;
@property (weak, nonatomic) AWEMusicDetailInspirationSectionCollectionHeaderView *relatHeader;
@property (weak, nonatomic) AWEMusicDetailInspirationModel *inspairModel;

+ (id)firstPageCutSameButtonClickedTrackParamsWithInspirationModel:(id)a0;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)trackFirstCellLoadIfNeeded;
- (void)trackFirstCoverLoadIfNeeded;
- (BOOL)shouldShowHeaderView;
- (BOOL)isMusicDetailHeaderOpt;
- (void)handleCellClickEvent:(id)a0 index:(long long)a1 clickType:(unsigned long long)a2;
- (BOOL)isMusicDetailHeaderOptHideHeder;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (double)separatorHeight;
- (id)sectionBackgroundColor;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
