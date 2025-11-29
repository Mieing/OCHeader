@class IESECWinMultiGoodsDiffableModel, NSArray, IESECCollectionViewSectionWaterfallLayout, IESECCommonGoodsListHandler, IESECWinRouterData, NSString;

@interface IESECRelationGoodsListSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol> {
    IESECWinMultiGoodsDiffableModel *_rawObject;
}

@property (retain, nonatomic) IESECCollectionViewSectionWaterfallLayout *sectionLayout;
@property (copy, nonatomic) NSArray *relationGoodsModels;
@property (retain, nonatomic) IESECCommonGoodsListHandler *listHandler;
@property (retain, nonatomic) IESECWinRouterData *context;
@property (readonly, nonatomic) IESECWinMultiGoodsDiffableModel *rawObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)productTabStyle;
- (id)cellForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 relationGoodsModel:(id)a1;
- (void)updateSectionLayoutIfNeeded;
- (long long)numberOfItems;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)actionHandler;
- (id)initWithContext:(id)a0;
- (long long)scene;
- (void)didSelectItemAtIndex:(long long)a0;
- (void)setPageContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
