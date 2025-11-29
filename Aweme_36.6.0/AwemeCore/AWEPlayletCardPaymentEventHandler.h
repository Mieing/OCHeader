@class NSString, AWEMixVideoModel, AWEAwemeModel, AWEPlayletInfoModel;
@protocol AWEPaymentEventHandlerDelegate;

@interface AWEPlayletCardPaymentEventHandler : NSObject <AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEPlayletInfoModel *playletModel;
@property (retain, nonatomic) AWEMixVideoModel *mixModel;
@property (weak, nonatomic) id<AWEPaymentEventHandlerDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL receiveAllEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePayEvent:(id)a0;
- (void)handleLoginEvent:(id)a0;
- (BOOL)shouldRespondsToEvent:(unsigned long long)a0 responseModel:(id)a1;
- (void)handleEvent:(unsigned long long)a0 responseModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)handlerIdentifier;

@end
