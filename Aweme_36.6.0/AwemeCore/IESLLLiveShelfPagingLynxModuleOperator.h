@class NSMutableDictionary, UIResponder, IESLLLiveLynxView, NSMutableArray;

@interface IESLLLiveShelfPagingLynxModuleOperator : NSObject

@property (retain, nonatomic) IESLLLiveLynxView *lynxModule;
@property (retain, nonatomic) NSMutableDictionary *processMap;
@property (retain, nonatomic) NSMutableArray *waitingArray;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) double beginTime;
@property (copy, nonatomic) id /* block */ actionBtnClickedBlock;
@property (copy, nonatomic) id /* block */ actionBtnClickedOnlyLogBlock;
@property (copy, nonatomic) id /* block */ cardClickedBlock;
@property (copy, nonatomic) id /* block */ lynxCloseLiveLifeShelf;
@property (copy, nonatomic) id /* block */ getViewFrameBlock;
@property (copy, nonatomic) id /* block */ liveShelfAutoUpdate;
@property (weak, nonatomic) UIResponder *btmResponder;

- (void)sendClickEventWithParams:(id)a0;
- (id)currentGeckoVersion;
- (void)setupLynxModule;
- (void)tryReload;
- (void)sendShelfCardShowEventWithIndexes:(id)a0 shelfUUID:(id)a1 cardType:(long long)a2 tagsSizeList:(id)a3;
- (void)sendShelfCardClickEventWithIndex:(long long)a0 clickType:(id)a1 trackingParams:(id)a2;
- (void)processShelfDataUpdate:(id)a0 completion:(id /* block */)a1;
- (void)beginNextProcessTask;
- (void)sendShelfUpdateEvent:(id)a0 completion:(id /* block */)a1;
- (void)sendCloseLifeShelfEvent;
- (void)sendShelfDidDisappearEventWithParams:(id)a0;
- (void)sendTopBarTabClickEventWithParams:(id)a0;
- (void)sendCartSessionIdUpdateEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReady;
- (id)init;
- (void)dealloc;
- (id)moduleVersion;

@end
