@class WCFinderStreamLoadingState, NSString, WCFinderFeedArray, FinderObjectPlaceHolderInfo;

@interface WCFinderColumnCellVMDataSource : NSObject <WCFinderFeedArrayDelegate, MMLivePivotViewControllerItemsSource>

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) FinderObjectPlaceHolderInfo *placeHolderInfo;
@property (copy, nonatomic) id /* block */ reportInfoGetter;
@property (copy, nonatomic) id /* block */ internalFlowIndexChangedBlock;
@property (copy, nonatomic) id /* block */ waitingFetchingComplete;
@property (nonatomic) unsigned long long currentFocusIndex;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (nonatomic) BOOL isFetchingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMore;

- (id)initWithContentVM:(id)a0 reportInfoGetter:(id /* block */)a1 internalFlowIndexChangedBlock:(id /* block */)a2;
- (void)fetchMoreDataWithFinish:(id /* block */)a0;
- (id)getReportInfo;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (unsigned long long)indexWithDataItem:(id)a0;
- (void)fetchMoreItemsWithLastItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)onLivePivotSwitchToDataItem:(id)a0;
- (void).cxx_destruct;

@end
