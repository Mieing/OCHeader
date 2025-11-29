@class NSString;

@interface AWEPasteboardServiceImplV2 : HTSService <AWEPasteboardService>

@property (copy, nonatomic) id /* block */ hintCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPasteboardContentWithCert:(id)a0 completion:(id /* block */)a1;
- (void)getPasteboardItemsWithCert:(id)a0 completion:(id /* block */)a1;
- (BOOL)canAutoreadPasteboardContent;
- (void)updateCanAutoreadPasteboardContent:(BOOL)a0;
- (void)requestAutoreadPasteboardContentPermission:(id /* block */)a0 enterFrom:(id)a1;
- (void)hintForAutoreadPasteboardPermission:(id /* block */)a0;
- (void)showAutoreadPasteboardPermissionCard:(id /* block */)a0;
- (void)hintForAutoreadPasteboardPermissionFinish:(id)a0;
- (BOOL)p_canShowPasteboardSettingGuideView;
- (id)__getStringWithCert:(id)a0 error:(id *)a1;
- (id)__getItemsWithCert:(id)a0 error:(id *)a1;
- (BOOL)__enableAutoReadPasteboardWithCert:(id)a0;
- (BOOL)__isCertInAllowList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
