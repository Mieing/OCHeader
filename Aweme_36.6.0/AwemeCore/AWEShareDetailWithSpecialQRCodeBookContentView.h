@class NSString, UIView, NSMutableArray, AWEShareContext;
@protocol BDXViewContainerProtocol;

@interface AWEShareDetailWithSpecialQRCodeBookContentView : AWEShareDetailWithQRCodeBaseContentView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSMutableArray *bridgeSubscriberList;
@property (copy, nonatomic) NSString *bookTemplateID;
@property (nonatomic) BOOL containerDidFirstScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidFirstScreen:(id)a0;
- (id)commonTrackParams;
- (void)bindEvent;
- (id)imageToSaveToAlbum;
- (void)setIsQRCodeLoaded:(BOOL)a0;
- (void)loadBulletView;
- (void)updateQRcode;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)dealloc;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
