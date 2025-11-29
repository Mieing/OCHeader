@class AWECodeGenServiceAccountModel;

@interface AWEMRSubscribeManageSwitchSectionController : AWEBaseListSectionController

@property (readonly, nonatomic) AWECodeGenServiceAccountModel *serviceAccount;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryFooterView:(id)a0;
- (void)handleSwitchEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (id)footerTitle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)footerViewClass;

@end
