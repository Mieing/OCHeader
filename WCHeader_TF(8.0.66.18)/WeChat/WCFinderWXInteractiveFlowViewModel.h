@class NSString, WCFinderWXInteractCenterDataProvider;
@protocol WCFinderWXInteractiveFlowViewModelDelegate;

@interface WCFinderWXInteractiveFlowViewModel : NSObject <WCFinderWXInteractCenterDataProviderDelegate, WCFinderDataItemExt>

@property (nonatomic) long long selectType;
@property (nonatomic) long long selectDataType;
@property (retain, nonatomic) WCFinderWXInteractCenterDataProvider *dataProvider;
@property (weak, nonatomic) id<WCFinderWXInteractiveFlowViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectType:(long long)a0;
- (long long)numberOfItems;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)collectionInfoAtIndex:(long long)a0;
- (id)contentConfigurationAtIndex:(long long)a0;
- (id)usernameAtIndex:(long long)a0;
- (id)_itemAtIndex:(long long)a0;
- (unsigned long long)flowViewState;
- (void)triggerFetchAction;
- (void)selectTabChanged:(long long)a0 dataType:(long long)a1;
- (id)favoriteItemFilterForItem:(id)a0;
- (id)favoriteItemFilterAtIndex:(long long)a0;
- (void)deleteFavoriteItemAtIndex:(long long)a0;
- (void)onWXInteractCenterDataLoadLocal;
- (void)onWXInteractCenterDataFetchSuc:(BOOL)a0;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)onFinderDataItemCancelFav:(id)a0;
- (void).cxx_destruct;

@end
