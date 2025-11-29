@class AWEACCCanvasMaker, ACCScanPhotoScanContext, NSString;

@interface AWEStudioScanRouterService : NSObject <AWERouterInterceptorDelegate, AWEStudioScanService>

@property (retain, nonatomic) ACCScanPhotoScanContext *photoScanContext;
@property (retain, nonatomic) AWEACCCanvasMaker *canvasMaker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)closeRecordPageIfRecordIsTopViewControllerWithCompletion:(id /* block */)a0;
- (BOOL)scanHomeFeedEntrance;
- (BOOL)supportJumpScanViewWithEnterForm:(id)a0;
- (void)scanViewControllerWithCameraOnly:(BOOL)a0 closeOnComplete:(BOOL)a1 enableAnalysis:(BOOL)a2 enterFrom:(id)a3 handler:(id /* block */)a4;
- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)getScanHistory;
- (void)setTosUri:(id)a0 forScanId:(id)a1;
- (void)deleteScanHistoryWithIds:(id)a0;
- (void)searchPageJumpEditWithSrcImage:(id)a0 scanResults:(id)a1 trackParams:(id)a2;
- (void)startQrCodeScanWithImage:(id)a0 extraLog:(id)a1 completed:(id /* block */)a2;
- (id)startQrCodeScanWithImage:(id)a0 supportMulti:(BOOL)a1 extraLog:(id)a2;
- (Class)getVideoRecordNavigationControllerClass;
- (void)jumpScanQrCodeWithUrl:(id)a0 trackParams:(id)a1;
- (id)readScanOriginImageOptWithScanId:(id)a0;
- (void)registerOriginScanIntercept;
- (void)scanViewControllerWithCameraOnly:(BOOL)a0 closeOnComplete:(BOOL)a1 enableAnalysis:(BOOL)a2 enterFrom:(id)a3 handler:(id /* block */)a4 extraParams:(id)a5;
- (BOOL)scanInterceptorSupportWithRouterParams:(id)a0;
- (void)jumpScanViewControllerWithCameraOnly:(BOOL)a0 closeOnComplete:(BOOL)a1 enableAnalysis:(BOOL)a2 enterFrom:(id)a3 handler:(id /* block */)a4 extraParams:(id)a5;
- (void)transferToVisionCameraVCURLString:(id)a0 transitionInfo:(id)a1;
- (void).cxx_destruct;

@end
