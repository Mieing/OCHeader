@class AWEUILoadingView, NSString, UIView, NSMutableArray, AWEShareContext;
@protocol BDXViewContainerProtocol;

@interface AWEShareDetailWithSpecialQRCodePOILynxContentView : AWEShareDetailWithQRCodeBaseContentView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSMutableArray *bridgeSubscriberList;
@property (nonatomic) BOOL containerDidFirstScreen;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)dismissLoading;
- (void)bindEvent;
- (id)imageToSaveToAlbum;
- (void)setIsQRCodeLoaded:(BOOL)a0;
- (void)layoutSubviewIfNeed;
- (void)loadBulletView;
- (void)updateQRcode;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)dealloc;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)showLoading;

@end
