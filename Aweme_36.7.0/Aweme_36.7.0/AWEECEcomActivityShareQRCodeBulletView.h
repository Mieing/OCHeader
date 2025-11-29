@class NSString, UIView, NSMutableArray, AWEShareContext;
@protocol AWEECGoodsShareQRCodeDelegate, BDXViewContainerProtocol;

@interface AWEECEcomActivityShareQRCodeBulletView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *qrCodeBulletView;
@property (retain, nonatomic) NSMutableArray *qrBridgeSubscriberList;
@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) BOOL containerDidFirstScreen;
@property (nonatomic) unsigned long long lynxViewType;
@property (weak, nonatomic) id<AWEECGoodsShareQRCodeDelegate> delegate;
@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidFirstScreen:(id)a0;
- (void)bindQRCodeEvent;
- (void)qrCodeBulletQRUpdateSend:(id)a0;
- (void)loadQRCodeBulletView;
- (void)unbindQRCodeEvent;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;

@end
