@class NSString, NSMutableDictionary, DUXBasicSheet;

@interface AWEAdAutoOpenAppManager : HTSService <AWEAdAutoOpenDownloadAppViewControllerDelegate, DUXSheetDelegate, AWEAdAutoOpenAppManager>

@property (retain, nonatomic) NSMutableDictionary *preDict;
@property (retain, nonatomic) NSMutableDictionary *toOpenDict;
@property (retain, nonatomic) DUXBasicSheet *sheetView;
@property (nonatomic) BOOL isOpening;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)a0;
- (void)clearAllTask;
- (void)onAppDidEnterBackground:(id)a0;
- (void)onAppStoreDismissWithNoti:(id)a0;
- (id)startAutoOpenTimerWithModel:(id)a0 expireTime:(double)a1;
- (void)dismissDuxSheetView;
- (void)handleAutoOpenTask:(id)a0;
- (void)openAutoOpenAppDialogWithModel:(id)a0;
- (void)tryAutoOpenDownloadAppWithModel:(id)a0;
- (void)onAuthorizeDialogClosed:(id)a0;
- (void)onAuthorizeDialogClickedOpen:(id)a0;
- (void)prepareAutoOpenTaskWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
