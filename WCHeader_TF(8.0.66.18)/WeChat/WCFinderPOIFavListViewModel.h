@class NSString, NSData, WCFinderListLoadingStateModel, NSMutableArray;
@protocol WCFinderPOIFavListViewModelDelegate;

@interface WCFinderPOIFavListViewModel : NSObject <IFavoritesExt>

@property (retain, nonatomic) NSMutableArray *poiItems;
@property (retain, nonatomic) NSMutableArray *unfavPOIItems;
@property (copy, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingModel;
@property (weak, nonatomic) id<WCFinderPOIFavListViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)fetchData;
- (BOOL)dataEmpty;
- (id)dataWithIndex:(unsigned long long)a0;
- (unsigned long long)dataCount;
- (void)OnAddNewFavoritesItems:(id)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
