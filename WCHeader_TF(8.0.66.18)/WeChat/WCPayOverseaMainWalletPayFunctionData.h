@class NSArray, WCPayOverseaReadActivityList, WCPayOverseaTypeInfoObject;

@interface WCPayOverseaMainWalletPayFunctionData : WCPayOverseaMainWalletData

@property (retain, nonatomic) NSArray *m_functionList;
@property (retain, nonatomic) WCPayOverseaTypeInfoObject *m_typeInfo;
@property (retain, nonatomic) WCPayOverseaReadActivityList *m_readList;
@property (retain, nonatomic) NSArray *m_walletRegionDescArray;
@property (nonatomic) BOOL m_hasFooterView;
@property (nonatomic) double m_currentTotalHeight;
@property (nonatomic) unsigned long long m_rowCount;
@property (nonatomic) BOOL m_rightTopNew;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)caluateDynamicCellHeight:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (double)footerViewHeight;
- (id)totalRegionDesc;
- (unsigned long long)rowCount;
- (double)totalHeight;
- (void).cxx_destruct;

@end
