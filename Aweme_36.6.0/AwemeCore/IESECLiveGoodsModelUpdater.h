@class IESECLiveApi, IESECLiveContext, NSString, IESECLiveRandomDelayTimer;
@protocol IESECLiveGoodsModelUpdaterDataSource, IESECLiveGoodsModelUpdaterDelegate;

@interface IESECLiveGoodsModelUpdater : NSObject <IESECLiveEventPlugin, IESECLiveMessageSubscriber, IESECLiveMessageSubscriber, IESECMessageSubscriber>

@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) long long updateRequestFrom;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveGoodsModelUpdaterDataSource> dataSource;
@property (weak, nonatomic) id<IESECLiveGoodsModelUpdaterDelegate> delegate;
@property (nonatomic) long long updateScene;
@property (nonatomic) BOOL disableUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (void)messageReceived_IESECProductUpdateMessage:(id)a0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)a0;
- (id)registerMessageClasses;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (void)messageReceived_IESECProductRefreshMessage:(id)a0;
- (id)allGoodsViewModels;
- (void)renewGoodsPriceWithProductIDs:(id)a0 promotionIDs:(id)a1;
- (BOOL)goodsListViewOnShow;
- (id)allExistGoodsModels;
- (void)fetchGoodsCampaignWithGoodsModelList:(id)a0 callback:(id /* block */)a1;
- (id)wholeGoodsListOnShow;
- (void)p_updateGoodsViewModels:(id)a0 allGoodsViewModels:(id)a1 refreshMessage:(id)a2;
- (void)p_updateGoodsViewModels:(id)a0 message:(id)a1;
- (void)p_updateItems:(id)a0 atIndexPaths:(id)a1 withUpdateType:(long long)a2 extraInfo:(id)a3;
- (void)updateAllGoodsViewModelsWithUpdateMessage:(id)a0;
- (void)updateAllGoodsViewModelsWithRefreshMessage:(id)a0;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
