@class WCFinderStreamLoadingState, NSMutableArray, NSDictionary;
@protocol WCFinderProfileStorePageModelDelegate;

@interface WCFinderProfileStorePageModel : WCFinderStreamProfilePageModel

@property (weak, nonatomic) id<WCFinderProfileStorePageModelDelegate> delegate;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (retain, nonatomic) NSMutableArray *productItems;
@property (readonly, nonatomic) NSDictionary *reportParams;

+ (int)tabId;

- (BOOL)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;
- (void)prepare;
- (void)requestPageData;
- (void)requestNextPage;
- (void)_doFetchPageData;
- (void)startFetchStoreTabCGI:(id /* block */)a0;
- (void).cxx_destruct;

@end
