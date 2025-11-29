@class NSArray, AWEFavoriteTabListDataContext, NSMutableSet;

@interface AWEFavoriteTabListTracker : NSObject

@property (retain, nonatomic) AWEFavoriteTabListDataContext *dataContext;
@property (retain, nonatomic) NSMutableSet *hasTrackedTabShowSet;
@property (copy, nonatomic) NSArray *lastExposeArray;
@property (nonatomic) BOOL hasReportSubItems;

+ (id)trackerWithDataContext:(id)a0;

- (void)trackItemSelectWithItemModel:(id)a0 selectedType:(long long)a1 extraInfo:(id)a2;
- (void)trackVisibleItemsWithItemModels:(id)a0 indexs:(id)a1;
- (void)trackExposeItemWithItemModel:(id)a0 index:(long long)a1 exposeType:(unsigned long long)a2;
- (void)trackLayoutItemsWithItemModels:(id)a0;
- (void)trackOtherPageItemSelectWithTabName:(id)a0;
- (id)cacheTabTypeForTabItem:(id)a0;
- (void).cxx_destruct;

@end
