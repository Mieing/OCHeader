@class NSString;

@interface IESLiveRevenuePlayXRoomModule : IESLiveModule <IESLiveRevenuePlayXRoomModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)portalInterface;
- (id)redEnvelopeInterface;
- (id)petRabbitInterface;

@end
