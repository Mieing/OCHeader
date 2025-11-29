@class NSString, NSMutableDictionary, MMURLHandler, NSNumber, EnhanceTranslatingUtil;

@interface OCRTransMgr : MMUserService <ICdnComMgrExt, MMConfigMgrExt, IMMLanguageMgrExt, MMServiceProtocol, PBMessageObserverDelegate> {
    NSNumber *_isBottomBarAvaliable;
    NSNumber *_isNewOCRTransAvaliable;
    NSMutableDictionary *_clientMsgID2ContextMap;
    EnhanceTranslatingUtil *_util;
}

@property (nonatomic) BOOL isDetectModelWorkable;
@property (retain, nonatomic) MMURLHandler *urlHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onMMDynamicConfigUpdated;
- (BOOL)isBottomBarAvaliable;
- (BOOL)isNewOCRTransAvaliable;
- (BOOL)setFromLang:(id)a0;
- (id)getFromLang;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnCdnUpload:(id)a0;
- (void)onLanguageChange;
- (unsigned int)cdnUploadTransImageData:(id)a0 sessionId:(unsigned int)a1 scene:(unsigned int)a2;
- (void)sendTransImageData:(id)a0 context:(id)a1;
- (void)handleSendTransImageData:(id)a0;
- (BOOL)enableScanTranslatingNewStyle;
- (void)checkDetectDocumentModelUpdate;
- (void)loadDetectDocumentModel;
- (void)releaseDetectDocumentModel;
- (void)detectDocumentArea:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sessionId:(unsigned long long)a2;
- (void).cxx_destruct;

@end
