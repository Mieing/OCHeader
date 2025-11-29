@interface IESIMConversationSettingImpl.ChatSettingsListComponent : AWEIMComponentBase <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IESIMChatSettingsListInterface, IESIMConversationSettingImpl.ChatSettingsItemBaseInfoCellDelegate> {
    void /* unknown type, empty encoding */ uiSerivce;
    void /* unknown type, empty encoding */ sectionViewModels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ displayedIndexPaths;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supplementaryViewProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)updateGroupSettingsItemWithIdentifiers:(id)a0 animation:(BOOL)a1;
- (void)reloadGroupSettingsItemDataSourceWithAnimation:(BOOL)a0;
- (double)preferredMaxLayoutWidthFor:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)scrollToTop;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)init;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)listView;

@end
