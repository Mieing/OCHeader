@class NSString, NSArray, NSMutableSet, HTSLiveMyLiveTab;

@interface IESLiveMyLiveTabViewModel : NSObject

@property (nonatomic) long long nextQueryIndex;
@property (retain, nonatomic) HTSLiveMyLiveTab *metaData;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *cellItems;
@property (retain, nonatomic) NSMutableSet *cellIdentifiers;
@property (nonatomic) BOOL shouldScrollToTop;

- (void)loadMore:(id /* block */)a0;
- (id)initWithMetaData:(id)a0;
- (void)createCellItems;
- (id)createSpaceCellViewModel;
- (void)loadMoreCellItemsWithTab:(id)a0;
- (void).cxx_destruct;

@end
