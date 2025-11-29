@class NSString, NSRecursiveLock;

@interface MMIntelligentToolMgr : MMUserService <MMServiceProtocol> {
    NSRecursiveLock *_ocrLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (id)getExternalLinkFeatureWithImage:(id)a0;
- (id)getModelPath;
- (id)getWebviewLinkFeatureWithImage:(id)a0;
- (id)getWebviewLinkFeatureModelPath;
- (id)getWebviewOutLinkClassifyFeatureWithImage:(id)a0;
- (id)getWebviewOutLinkClassifyFeatureModelPath;
- (id)getImageFeatureForNewLifeWithImage:(id)a0;
- (id)getOcrTextWithImage:(id)a0;
- (id)getOcrLineTextWithImage:(id)a0;
- (BOOL)releaseOcrXNetCache;
- (id)generatePHashWithImage:(id)a0;
- (id)getClassificationWithImage:(id)a0;
- (id)getCodeClassify:(id)a0;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void).cxx_destruct;

@end
