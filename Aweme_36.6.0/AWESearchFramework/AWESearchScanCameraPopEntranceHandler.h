@class NSDictionary, NSString, DUXAlertDialog;

@interface AWESearchScanCameraPopEntranceHandler : NSObject <DUXAlertDialogDelegate>

@property (retain, nonatomic) DUXAlertDialog *dialog;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)alertDialogDidDismiss:(id)a0;
- (BOOL)isCurrentDialog;
- (id)syncGetSearchScanSampleImageGuide;
- (void)displayEnsureSampleImageGuideIfNeeded:(id /* block */)a0 trackParams:(id)a1 showOnVc:(id)a2;
- (id)getScanCameraPopEntranceConfigModel:(id)a0;
- (void)displayEnsureSampleImageGuideDialog:(id)a0 completion:(id /* block */)a1 showOnVc:(id)a2;
- (void)displaySampleImageGuideDialog:(id)a0 completion:(id /* block */)a1;
- (void)updateStyleEnsureOneUI:(id)a0 item:(id)a1 completion:(id /* block */)a2 showCompletion:(id /* block */)a3 showOnVc:(id)a4;
- (void)updateStyleOneUI:(id)a0 item:(id)a1 completion:(id /* block */)a2 showCompletion:(id /* block */)a3;
- (void)updateStyleEnsureTwoUI:(id)a0 item:(id)a1 completion:(id /* block */)a2 showCompletion:(id /* block */)a3 showOnVc:(id)a4;
- (void)updateStyleTwoUI:(id)a0 item:(id)a1 completion:(id /* block */)a2 showCompletion:(id /* block */)a3;
- (void)pushSearchScanResult:(id)a0;
- (void)trackScabTabVisualGuideClick:(long long)a0 isLoaded:(id)a1 configModel:(id)a2;
- (void)trackScabTabVisualGuideHide:(id)a0 configModel:(id)a1;
- (void)trackScabTabVisualGuideDownloadFail:(id)a0;
- (void)trackScabTabVisualGuideShow:(id)a0;
- (void)displaySampleImageGuideIfNeeded:(id /* block */)a0 trackParams:(id)a1;
- (void)resetStatus;
- (void).cxx_destruct;

@end
