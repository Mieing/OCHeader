@class NSString, UIView, NSMutableArray, AWEShareContext;
@protocol AWEECGoodsSharePosterDelegate, BDXViewContainerProtocol;

@interface AWEECGoodsSharePosterBulletView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *posterBulletView;
@property (retain, nonatomic) NSMutableArray *posterBridgeSubscriberList;
@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) BOOL containerDidFirstScreen;
@property (weak, nonatomic) id<AWEECGoodsSharePosterDelegate> delegate;
@property (nonatomic) BOOL isQRCodeLoaded;
@property (copy, nonatomic) NSString *posterLynxUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidFirstScreen:(id)a0;
- (id)_convertFenToYuan:(id)a0;
- (void)bindPosterEvent;
- (void)posterQrCodeUpdateSend:(id)a0;
- (void)loadPosterBulletView;
- (void)unbindPosterEvent;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
