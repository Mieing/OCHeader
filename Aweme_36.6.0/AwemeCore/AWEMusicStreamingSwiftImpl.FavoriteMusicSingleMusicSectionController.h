@interface AWEMusicStreamingSwiftImpl.FavoriteMusicSingleMusicSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ cellDefaultHeight;
    void /* unknown type, empty encoding */ cellNewProfileHeight;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ currentPlayIndex;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)handleUIThemeChangeNotificationWithNotice:(id)a0;
- (void)handleCellEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)handleCellSameStyleEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;
- (Class)headerViewClass;

@end
