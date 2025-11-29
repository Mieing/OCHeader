@class NSString;

@interface IESLiveScanCodeServiceImpl : NSObject <IESLiveScanCodeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentScanViewControllerWithCompletionHandler:(id /* block */)a0 cameraOnly:(BOOL)a1 closeOnComplete:(BOOL)a2;

@end
