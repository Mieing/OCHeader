@class NSMutableDictionary, NSDictionary, IESECLiveContext, IESECLiveListDispatcherContainer, NSString;
@protocol IESECLiveStorage, IESECLiveGoodsListViewEnvironment, IESECLiveGoodsListViewModelProtocol, IESECLiveGoodsListModuleDelegate;

@interface IESECLiveGoodsListModule : NSObject <IESECLiveStorage, IESECLiveGoodsListEnvProvider, IESECLiveListDispatcherContainerDelegate>

@property (retain, nonatomic) id<IESECLiveGoodsListViewModelProtocol> viewModel;
@property (retain, nonatomic) IESECLiveContext *baseContext;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSMutableDictionary *listInfoSavedInRoom;
@property (weak, nonatomic) id<IESECLiveGoodsListModuleDelegate> delegate;
@property (retain, nonatomic) IESECLiveListDispatcherContainer *dispatcherContainer;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL hasPreloadedData;
@property (readonly, nonatomic) BOOL isPreloadCacheHit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<IESECLiveStorage> storage;
@property (readonly, weak, nonatomic) id<IESECLiveGoodsListViewEnvironment> env;

- (void)widgetOrientationWillChange:(long long)a0;
- (void)preloadListView;
- (void)iPadCloseTopFuncView:(BOOL *)a0;
- (id)initWithLiveContext:(id)a0 delegate:(id)a1;
- (void)p_createDefaultListContainerIfNeed;
- (void)p_showWithParams:(id)a0 completion:(id /* block */)a1;
- (void)forceLoginBeforeShowWithCompletion:(id /* block */)a0;
- (id)p_panelContainer;
- (void)p_delegateReadyToShowListView:(id)a0;
- (id)panelEnv;
- (void)dispatcherContainerDidClose:(id)a0;
- (void)showWithParams:(id)a0 completion:(id /* block */)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)prefetchData;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)closeWithCompletion:(id /* block */)a0;

@end
