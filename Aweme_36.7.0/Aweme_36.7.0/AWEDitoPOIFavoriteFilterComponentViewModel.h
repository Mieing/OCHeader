@class AWEDitoPOIFavoriteFilterComponentView, NSArray, DitoNode, AWEDitoPOIFavoritePageContext, AWEDitoPOIFavoriteSelectorModel;

@interface AWEDitoPOIFavoriteFilterComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (weak, nonatomic) DitoNode *node;
@property (retain, nonatomic) AWEDitoPOIFavoriteSelectorModel *validSortItemCache;
@property (retain, nonatomic) AWEDitoPOIFavoriteSelectorModel *emptySortItem;
@property (weak, nonatomic) AWEDitoPOIFavoriteFilterComponentView *cell;
@property (nonatomic) BOOL isSubTab;
@property (nonatomic) double currentBackgroundColorAlpha;
@property (copy, nonatomic) NSArray *itemsArray;
@property (nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) AWEDitoPOIFavoriteSelectorModel *selectedSortItem;

- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)willDismissAllFilterContentView;
- (void)willShowFilterContentView;
- (id)poiSelectorDatasFromRawDatas:(id)a0;
- (id)selectedSelectorInDatas:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)updateData;

@end
