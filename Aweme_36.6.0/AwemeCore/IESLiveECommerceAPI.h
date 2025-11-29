@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveECommerceAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) NSString *baseURL;

- (void)fetchAnchorPickedGoodsFor:(id)a0 toRoomId:(id)a1 otherParams:(id)a2 callback:(id /* block */)a3;
- (void)ecomTrackMonitorEvent:(id)a0 metricParams:(id)a1 categoryParams:(id)a2 extraParams:(id)a3;
- (void)reportShopCartTaskWithTaskId:(id)a0 taskMetaId:(id)a1 scene:(long long)a2 callback:(id /* block */)a3;
- (void)request:(id)a0 apiPath:(id)a1 postMethod:(BOOL)a2 parameters:(id)a3 modelClass:(Class)a4 monitor:(id)a5 callback:(id /* block */)a6;
- (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2 response:(id)a3 error:(id)a4;
- (void)fetchPickedGoodsFor:(id)a0 toRoomId:(id)a1 otherParams:(id)a2 callback:(id /* block */)a3;
- (void)newRequest:(id)a0 apiPath:(id)a1 postMethod:(BOOL)a2 parameters:(id)a3 modelClass:(Class)a4 monitor:(id)a5 callback:(id /* block */)a6;
- (void)request:(id)a0 postMethod:(BOOL)a1 parameters:(id)a2 modelClass:(Class)a3 monitor:(id)a4 callback:(id /* block */)a5;
- (id)getShopCartTaskScene:(long long)a0;
- (void)fetchShopCartShouldShowFor:(id)a0 toRoomId:(id)a1 callback:(id /* block */)a2;
- (void)bindPickedGoods:(id)a0 userId:(id)a1 toRoomId:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
