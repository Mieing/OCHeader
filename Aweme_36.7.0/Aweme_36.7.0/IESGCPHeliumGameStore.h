@class NSNumber, NSString, IESGCPHeliumGameApi;

@interface IESGCPHeliumGameStore : NSObject <IESGCPDIContextSubscriber, IESGCPHeliumGameRouter>

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) IESGCPHeliumGameApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)openHeliumGameWithRouterModel:(id)a0;
- (id)openDetailPageSchemaWithGameId:(id)a0;
- (id)heliumGameCommonTrackParamsWithPromoteScene:(unsigned long long)a0;
- (void)preloadHeliumGameWithSchema:(id)a0;
- (id)initWithRoomID:(id)a0 anchorID:(id)a1;
- (void)trackHeliumGameEntranceDidShow:(id)a0;
- (void)trackHeliumGameEntranceDidClick:(id)a0;
- (void)_trueOpenGameWithRouterModel:(id)a0;
- (void)_recordHeliumGameOpenedWithRouterModel:(id)a0;
- (id)_timorBdpLogWithRouterModel:(id)a0;
- (unsigned long long)_promoteSceneWithPromoteSceneString:(id)a0;
- (id)_timorCustomParamsWithRouterModel:(id)a0;
- (void).cxx_destruct;

@end
