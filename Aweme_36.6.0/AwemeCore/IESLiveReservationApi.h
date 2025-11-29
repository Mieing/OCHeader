@interface IESLiveReservationApi : HTSLiveApi

- (void)makeGroupReservation:(id)a0 callBack:(id /* block */)a1;
- (void)makeSingleReservation:(id)a0 appointType:(id)a1 source:(id)a2 callBack:(id /* block */)a3;
- (void)cancelGroupReservation:(id)a0 callBack:(id /* block */)a1;
- (void)cancelSingleReservation:(id)a0 appointType:(id)a1 callBack:(id /* block */)a2;
- (void)fetchReservationStatus:(id)a0 callBack:(id /* block */)a1;

@end
