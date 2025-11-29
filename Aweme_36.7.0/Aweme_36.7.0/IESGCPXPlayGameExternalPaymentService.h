@class IESGCPXPlayGameModel, IESGCPXPlayGameAPI, IESGCPXPlayGamePaymentManager;

@interface IESGCPXPlayGameExternalPaymentService : NSObject

@property (retain, nonatomic) IESGCPXPlayGameModel *gameModel;
@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) IESGCPXPlayGamePaymentManager *paymentManager;

- (void)initXPlayGamePayForGameId:(id)a0 gameName:(id)a1 orientation:(long long)a2;
- (void)xplayGamePayWithOutOrderId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
