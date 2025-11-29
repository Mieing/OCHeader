@class NSData, NSDiffableDataSourceSnapshot, NSMutableArray;
@protocol WCFinderProfileNativeDramaTabPageModelDelegate;

@interface WCFinderProfileNativeDramaTabPageModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSMutableArray *dramaList;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (weak, nonatomic) id<WCFinderProfileNativeDramaTabPageModelDelegate> delegate;

+ (int)tabId;

- (id)init;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)_updateSection;
- (id)itemAtIndex:(long long)a0;
- (void)requestPageData;
- (void)requestNextPage;
- (void)_fetchData;
- (void).cxx_destruct;

@end
