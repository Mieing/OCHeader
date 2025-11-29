@class NSPointerArray;

@interface WCFinderListLoadingStateModel : NSObject

@property (retain, nonatomic) NSPointerArray *observers;
@property (nonatomic) BOOL loadingDown;
@property (nonatomic) BOOL loadingUp;
@property (nonatomic) BOOL continueFlagDown;
@property (nonatomic) BOOL continueFlagUp;
@property (nonatomic) BOOL loadingFailDown;
@property (nonatomic) BOOL loadingFailUp;

- (id)init;
- (BOOL)loading;
- (BOOL)loadingFail;
- (void)modifyWithUpdater:(id /* block */)a0;
- (void)sink:(id)a0;
- (void)_modifyObservers;
- (void)compactObservers;
- (void)updateEmptyUIStateWithEmptyLoadingBlock:(id /* block */)a0 emptyDataBlock:(id /* block */)a1 emptyFailBlock:(id /* block */)a2;
- (void)updateFooterViewStateWithTableView:(id)a0 footerView:(id)a1 dataEmpty:(BOOL)a2;
- (void)updateStreamFooterView:(id)a0;
- (BOOL)canLoadDown;
- (void).cxx_destruct;

@end
