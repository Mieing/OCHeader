@class NSString;

@interface IESLiveChargeRoomModule : IESLiveModule <IESLiveChargeRoomModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redeemInterface;
- (id)chargeInterface;

@end
