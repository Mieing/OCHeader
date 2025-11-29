@class UICollectionView, NSString, UIView;

@interface AWENewVideoImageTemplateListView : AWEImageTemplateListView <AWENewVideoImageTemplateListCatCellDelegate>

@property (retain, nonatomic) UIView *authorInfoView;
@property (retain, nonatomic) UICollectionView *templateCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectTemplateCollectionCellInIndexPath:(id)a0 unselectInIndexPath:(id)a1;
- (BOOL)shouldShowTopIndicator;
- (double)templateImageCollectionViewHeight;
- (BOOL)isTemplateInfoInTemplateList;
- (void)templateApplyTemplateSuccessForIndexPath:(id)a0;
- (void)templateImageCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)templateImageCollectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)templateImageCollectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })templateImageCollectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })templateImageCollectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)visibleTemplateCellIndexPaths;
- (BOOL)isTemplateInMultiParts;
- (void)scrollToShowTemplate:(id)a0;
- (Class)templateTabItemClass;
- (id)clearStickerImage;
- (id)templateImageCollectionView;
- (void)cellShowComplianceNotificationAndAuthorInfoAndClearBtnStatusWith:(id)a0;
- (void)cell:(id)a0 didSelectForIndexPath:(id)a1 model:(id)a2;
- (void).cxx_destruct;

@end
