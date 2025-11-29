@class NSArray, NSString, AWEAnchorAdditionSearchDataController, AWEAnchorAdditionDataController, NSDictionary;

@interface AWEAnchorAdditionViewModel : NSObject

@property (retain, nonatomic) AWEAnchorAdditionSearchDataController *searchDataController;
@property (retain, nonatomic) AWEAnchorAdditionDataController *dataController;
@property (copy, nonatomic) NSArray *tabBarDataSource;
@property (copy, nonatomic) NSArray *sectionDataSource;
@property (copy, nonatomic) NSArray *searchDataSource;
@property (copy, nonatomic) NSArray *selectedDataSource;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL isSearchMode;
@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *bizExtra;

- (void)loadMoreDataController;
- (void)refreshDataController;
- (void)refreshDataControllerWithCompeletion:(id /* block */)a0;
- (id)cellModelAtIndexPath:(id)a0;
- (id)listModelAtIndexSection:(long long)a0;
- (void)refreshSearchDataControllerWithKeyword:(id)a0;
- (void)updateListModelWithCellModels:(id)a0 sectionType:(long long)a1;
- (id)listModelWithType:(long long)a0;
- (void)refreshSelectedDataController;
- (void)loadMoreSearchDataControllerWithKeyword:(id)a0;
- (void)loadMoreSelectedDataController;
- (long long)rowCountWithSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)sectionCount;

@end
