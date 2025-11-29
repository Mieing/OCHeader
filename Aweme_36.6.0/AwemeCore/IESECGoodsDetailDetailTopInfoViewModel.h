@class NSArray;

@interface IESECGoodsDetailDetailTopInfoViewModel : IESECGoodsDetailPageBaseViewModel

@property (copy, nonatomic) NSArray *itemNameList;
@property (nonatomic) double tableHeaderWidth;
@property (nonatomic) struct CGPoint { double x; double y; } propertySKUContentOffset;

- (void)setupViewModel;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)updateDataModel:(id)a0;
- (void)setupCurrentViewSize;
- (void)selectPropertySKUFrom:(unsigned long long)a0 To:(unsigned long long)a1;
- (BOOL)hasMoreProperty;
- (id)currentTableItemList;
- (double)tableItemHeaderWidth;
- (BOOL)showMultiPropertySKUs;
- (BOOL)hasSubProductAtSKUIndex:(unsigned long long)a0;
- (id)currentSubProductLabelElement;
- (long long)showTableLineCount;
- (id)setupPropertySKUCoverElement:(id)a0;
- (id)setupPropertySKUTextElement:(id)a0;
- (id)setupSubProductLabel:(id)a0;
- (id)setupTableItemListWith:(id)a0;
- (void)selectPropertySKU:(unsigned long long)a0;
- (id)currentAuthInfo;
- (id)topInfoDataModel;
- (void)unselectPropertySKU:(unsigned long long)a0;
- (id)topInfoMetaModel;
- (void)trackPropertyView;
- (unsigned long long)currentSelectedSKUIndex;
- (void)selectPropertySKUToSKUId:(id)a0 withCompletion:(id /* block */)a1;
- (id)tracker;
- (void).cxx_destruct;
- (double)tableHeight;

@end
