@class NSString, IESGCPApi;

@interface IESGCPReserveServiceImpl : NSObject <IESGCPReserveService>

@property (retain, nonatomic) IESGCPApi *API;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reserveGameWithDitc:(id)a0 completion:(id /* block */)a1;
- (void)queryGameReserveStatusWithGameId:(id)a0 completion:(id /* block */)a1;
- (void)reserveGameWithModel:(id)a0 completion:(id /* block */)a1;
- (void)cancelReserveGameWithLynxViewWithModel:(id)a0;
- (void)trachBookWithModel:(id)a0;
- (void)reserveGameLoginedWithModel:(id)a0 completion:(id /* block */)a1;
- (void)monitorReserveStatus:(id)a0 enterFrom:(id)a1 extra:(id)a2;
- (void)_reserveGameWithModel:(id)a0 completion:(id /* block */)a1;
- (void)_queryGameReserveStatusWithGameId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
