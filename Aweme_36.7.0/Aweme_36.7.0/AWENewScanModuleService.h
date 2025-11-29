@interface AWENewScanModuleService : HTSService <HTSService, AWENewScanModuleServiceProtocol> {
    void /* unknown type, empty encoding */ resultHandler;
}

+ (void)bindMyQRRouter;

- (id)gradualChangColor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startColorString:(id)a1 endColorString:(id)a2;
- (void)fetchQRCodeImageWithType:(unsigned long long)a0 itemID:(id)a1 editionID:(id)a2 completion:(id /* block */)a3;
- (void)fetchQRCodeImageWithType:(unsigned long long)a0 itemID:(id)a1 extraInfo:(id)a2 useRebrandStyle:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchQRCodeImageWithType:(unsigned long long)a0 itemID:(id)a1 extraInfo:(id)a2 reqExtraInfo:(id)a3 useRebrandStyle:(BOOL)a4 completion:(id /* block */)a5;
- (void)fetchQRCodeImageWithType:(unsigned long long)a0 itemID:(id)a1 extraInfo:(id)a2 useRebrandStyle:(BOOL)a3 activityInfo:(id)a4 shareScene:(id)a5 completion:(id /* block */)a6;
- (void)fetchAIGCQRCodeListWithCompletion:(id /* block */)a0;
- (void)presentScanViewControllerWithCameraOnly:(BOOL)a0 closeOnComplete:(BOOL)a1 handler:(id /* block */)a2;
- (void)presentScanViewControllerWithCameraOnly:(BOOL)a0 closeOnComplete:(BOOL)a1 enableAnalysis:(BOOL)a2 handler:(id /* block */)a3;
- (id)scanViewControllerWithHandler:(id /* block */)a0;
- (void)ironManStartScanWithCompletion:(id /* block */)a0;
- (id)mapQRCodeDeepLink:(id)a0;
- (void)urlStringFromQRCodeImage:(id)a0 completion:(id /* block */)a1;
- (void)readActivityQRCodeInfoWithVideo:(id)a0 completion:(id /* block */)a1;
- (void)handleScanResult:(id)a0 trackParams:(id)a1 urlProcessBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)handleScanConvertResult:(id)a0 trackParams:(id)a1 enableAnalysis:(BOOL)a2 completion:(id /* block */)a3;
- (id)qrCodeColorTemplate:(BOOL)a0 avatarImage:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
