@class NSString;

@interface AWELiveQRCodeScanServiceImpl : NSObject <IESLiveQRCodeScanService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openQRCodeScannerWithCameraOnly:(BOOL)a0 closeOnComplete:(BOOL)a1 completion:(id /* block */)a2;

@end
