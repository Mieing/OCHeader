@class NSString;

@interface AWEACCQRCodeResultHandlerImpl : NSObject <ACCQRCodeResultHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCurrentDialog;
- (void)resetCameraScanSampleImageGuide;
- (void)openMyQrCodePageWithTrackParams:(id)a0;
- (void)handleScanResult:(id)a0 isShapedType:(BOOL)a1 enterFrom:(id)a2 URLProcessBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)openMyQrCodePage;
- (void)handleCameraScanResult:(id)a0 trackParams:(id)a1 urlProcessBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)handleCameraScanConvertResult:(id)a0 trackParams:(id)a1 enableAnalysis:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleCameraScanSampleImageGuideWithCompletion:(id /* block */)a0 trackParams:(id)a1;
- (void)handleCameraScanSampleImageGuideWithCompletion:(id /* block */)a0 trackParams:(id)a1 showOnVc:(id)a2;
- (id)displayScanAlbumImageGuideWithTrackParams:(id)a0 usagePage:(id)a1 showOnView:(id)a2 targetView:(id)a3 targetPoint:(struct CGPoint { double x0; double x1; })a4 extra:(id)a5 completion:(id /* block */)a6;

@end
