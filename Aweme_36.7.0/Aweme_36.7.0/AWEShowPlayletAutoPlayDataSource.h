@class NSString, AWEAwemeModel, AWEPageContext, AWEListDataController;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEShowPlayletAutoPlayDataSource : NSObject {
    void /* function */ requestListenerCallback;
    void /* function */ dataFetchListenerCallback;
    void /* unknown type, empty encoding */ refreshDataListenerCallback;
    void /* function */ enterFrom;
    void /* function */ previousPage;
}

@property (nonatomic, copy) id /* block */ requestListenerCallback;
@property (nonatomic, copy) id /* block */ dataFetchListenerCallback;
@property (nonatomic, retain) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *previousPage;
@property (nonatomic, retain) AWEAwemeModel *currentModel;
@property (nonatomic, retain) AWEAwemeModel *currentAdModel;
@property (nonatomic, retain) AWEListDataController *currentDataController;

- (id)errorMsg;
- (id)adModel;
- (BOOL)hasNextEpisodeWithModel:(id)a0;
- (BOOL)hasNext2EpisodeWithModel:(id)a0;
- (id)nextModelWithModel:(id)a0;
- (id)fromAdTrafficContinuePlayIndexWithModel:(id)a0;
- (void)setAdModelWithModel:(id)a0;
- (BOOL)enableRequestMore;
- (void)requestDataWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)requestDataFromRTS:(BOOL)a0 model:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)resetSourceWithModel:(id)a0 preCurrentEpisode:(long long)a1 preCurrentSeriesAwemeIndex:(long long)a2 preCurrentSeriesMaterialType:(long long)a3 recomendInfo:(id)a4 advertiseParam:(id)a5 completion:(id /* block */)a6;
- (void)refreshSeriesAwemeWithModel:(id)a0 currentEpisode:(long long)a1 preCurrentEpisode:(long long)a2 recommendInfo:(id)a3 advertiseParam:(id)a4;
- (void)setSeriesIdWithSeriesId:(id)a0;
- (void)setEventTypeWithEventType:(id)a0;
- (void)setStrategyTypeWithStrategyType:(id)a0;
- (void)setPreCurrentSeriesAwemeIndexWithIndex:(long long)a0;
- (void)setPreCurrentSeriesMaterialTypeWithType:(long long)a0;
- (void)setPreviousPageWithPreviousPage:(id)a0;
- (void)setEnterFromEnterFrom:(id)a0;
- (void)setHasShowFreeWatchBtnWithShow:(long long)a0;
- (id)dataSourceConfigWithModel:(id)a0;
- (id)dataControllerWithModel:(id)a0;
- (void)handleColorizeModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isNull;

@end
