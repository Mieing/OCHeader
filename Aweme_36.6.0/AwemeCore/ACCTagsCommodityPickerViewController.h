@class NSArray, NSMutableArray, ACCTagsListDataController;

@interface ACCTagsCommodityPickerViewController : ACCTagsItemPickerViewController

@property (retain, nonatomic) NSMutableArray *commodities;
@property (retain, nonatomic) ACCTagsListDataController *dataController;
@property (copy, nonatomic) NSArray *recommendCommodities;

- (void)loadMoreWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommendData;
- (void)searchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)tagTypeString;
- (id)tagModelForIndexPath:(id)a0;
- (id)emptyResultText;
- (id)searchBarPlaceHolder;
- (BOOL)shouldRecommendDataWithCurrentFrame;
- (void)restoreRecommendData;
- (void)preFetchRecommendData;
- (id)itemTrackerParamsForItemAtIndexPath:(id)a0 isSelect:(BOOL)a1;
- (BOOL)needFooter;
- (void).cxx_destruct;
- (id)dataSource;
- (long long)type;
- (double)headerHeight;
- (id)headerText;
- (Class)cellClass;
- (id)itemTitle;
- (long long)indexOfItem:(id)a0;
- (id)cellIdentifier;
- (double)cellHeight;

@end
