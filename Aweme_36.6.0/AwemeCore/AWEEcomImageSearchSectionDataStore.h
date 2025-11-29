@class NSMutableArray, AWEDoubleColumnSearchMerchandiseModel, AWEEcomSearchResultTabItem, AWEEcomImageSearchSectionParams;

@interface AWEEcomImageSearchSectionDataStore : NSObject <IGListDiffable>

@property (retain, nonatomic) AWEEcomSearchResultTabItem *tabItem;
@property (retain, nonatomic) AWEEcomImageSearchSectionParams *sectionParams;
@property (nonatomic) long long shownCount;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *moreButtonModel;
@property (retain, nonatomic) NSMutableArray *shownItems;
@property (retain, nonatomic) NSMutableArray *cachedItems;

+ (id)dataStoreArrayWithTabItems:(id)a0;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })handleResponseItems:(id)a0;
- (void)noMoreData;
- (BOOL)needLoadMore;
- (void)showCachedModel;
- (id)initWithTabInfoItem:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
