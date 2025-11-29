@class NSString;

@interface IESLiveReservationModule : IESLiveModule <IESLiveReservationModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reservationInterface;

@end
