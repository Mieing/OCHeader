@class NSString, IESLiveReservationApi;

@interface IESLiveReservationApiManager : NSObject <IESLiveReservationApiProvider>

@property (retain, nonatomic) IESLiveReservationApi *reservationApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reservationManager;

- (void)cancelGroupReservation:(id)a0 completion:(id /* block */)a1;
- (void)makeGroupReservation:(id)a0 completion:(id /* block */)a1;
- (void)makeSignalReservation:(id)a0 appointType:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void)cancelSignalReservation:(id)a0 appointType:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
