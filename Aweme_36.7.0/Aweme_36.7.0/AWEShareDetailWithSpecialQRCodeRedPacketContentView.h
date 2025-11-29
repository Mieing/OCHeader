@class AWEShareContext, NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEShareDetailWithSpecialQRCodeRedPacketContentView : AWEShareDetailWithQRCodeBaseContentView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageToSaveToAlbum;
- (void)loadBulletView;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
