@class NSArray, NSString;
@protocol WCFinderWXInteractiveDetailViewModelDelegate, WCFinderWXInteractiveDetailViewModelDataSource, WCFinderInteractiveDetailListDataProvider;

@interface WCFinderWXInteractiveDetailViewModel : NSObject <WCFinderWXInteractCenterDataProviderDelegate>

@property (nonatomic) long long selectType;
@property (retain, nonatomic) id<WCFinderInteractiveDetailListDataProvider> dataProvider;
@property (retain, nonatomic) NSArray *lastCacheFeedArray;
@property (copy, nonatomic) NSString *localFocusFeedId;
@property (retain, nonatomic) NSArray *localFeedArray;
@property (weak, nonatomic) id<WCFinderWXInteractiveDetailViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderWXInteractiveDetailViewModelDataSource> dataSource;
@property (copy, nonatomic) NSString *anchorFeedId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectType:(long long)a0 dataProvider:(id)a1;
- (long long)anchorFeedIndex;
- (void)deleteItemAtIndex:(long long)a0;
- (id)filterMapper:(id)a0 filterBlock:(id /* block */)a1;
- (id)filterPipline;
- (long long)numberOfSection;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMAtTid:(id)a0;
- (long long)contentIndexOfTid:(id)a0;
- (void)triggerFetchAction;
- (BOOL)isNoMoreData;
- (void)makeLocalFeedSort;
- (void)onWXInteractCenterDataFetchSuc:(BOOL)a0;
- (void)onWXInteractCenterDataFetchWillHandle:(BOOL)a0;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)a0 toIndex:(long long)a1;
- (void).cxx_destruct;

@end
