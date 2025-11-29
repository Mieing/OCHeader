@class NSString;

@interface ScanGoodsService : WSTemplateBaseMgr <MMResourceMgrExt, MMServiceProtocol, PBMessageObserverDelegate>

@property (nonatomic) BOOL isUploadingCameraImageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deleteScanGoodDevelopH5;

- (void)onServiceInit;
- (void)dealloc;
- (void)fetchScanConfigure;
- (void)fetchDynamicWording;
- (void)fetchPhashConfigure;
- (void)fetchScanCombineConfigure;
- (void)internalFetchScanConfWithType:(int)a0;
- (BOOL)sendImageInfoWithNewCGI:(id)a0;
- (BOOL)sendImageInfo:(id)a0;
- (unsigned int)sendPressImageInfo:(id)a0;
- (void)cancelSendPressImageInfo:(unsigned int)a0;
- (void)onBeginUploadingCameraImageInfo;
- (void)onEndUploadingCameraImageInfo;
- (unsigned int)getSendImageInfoCgiTimeout;
- (void)setSendImageInfoCgiTimeout:(unsigned int)a0;
- (void)mpTemplateRequest:(unsigned int)a0 type:(unsigned int)a1 content:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleFetchScanConfigure:(id)a0;
- (void)handleFetchDynamicWording:(id)a0;
- (void)handleFetchPhashConfigure:(id)a0;
- (void)hanldeScanCombineConfigure:(id)a0;
- (void)handleUploadResponse:(id)a0;
- (void)handleSendImageInfo:(id)a0;
- (void)handleSendPressImageInfo:(id)a0;
- (void)handleMpTemplateResponse:(id)a0;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (long long)getResultActionFromReturnType:(unsigned int)a0;

@end
