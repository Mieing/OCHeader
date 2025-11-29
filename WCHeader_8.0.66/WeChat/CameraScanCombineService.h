@class NSString, CameraScanCombineModelInfo, NSObject, CameraScanCombineModelGetter;
@protocol OS_dispatch_queue;

@interface CameraScanCombineService : MMUserService <IScanGoodsServiceExt, MMResourceMgrExt, MMServiceProtocol>

@property (copy, nonatomic) NSString *ffeSvrConfigStr;
@property (copy, nonatomic) NSString *ffeSvrConfigVersion;
@property (nonatomic) long long ffeSvrConfigModelVersion;
@property (copy, nonatomic) NSString *ffeSvrConfigInfoGuideText;
@property (copy, nonatomic) NSString *ffeSvrConfigDetObjGuideText;
@property (nonatomic) long long ffeSvrConfigReqUploadTimeout;
@property (nonatomic) long long ffeSvrConfigReqRetrievalTimeout;
@property (nonatomic) long long ffeSvrConfigReqInteval;
@property (nonatomic) BOOL ffeSvrConfigDetectBlock;
@property (nonatomic) BOOL ffeSvrConfigPreloadBlock;
@property (retain, nonatomic) CameraScanCombineModelGetter *modelGetter;
@property (retain, nonatomic) CameraScanCombineModelInfo *modelInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modelQueue;
@property (nonatomic) long long scanBlackCount;
@property (nonatomic) BOOL svrFallbackStop;
@property (nonatomic) long long svrFallbackFrameLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearSvrConfig;
- (void)loadSvrConfigFromMMKV;
- (void)loadSvrControlFromConfig:(id)a0;
- (void)fetchLatestScanCombineSvrConfig;
- (void)onFetchCombineConfigureSuccess:(id)a0 confVersion:(id)a1 confGuide:(id)a2 detObjGuide:(id)a3 noModelFrameLimit:(unsigned int)a4;
- (void)onFetchCombineConfigureFail:(long long)a0 errorMsg:(id)a1;
- (id)scanCombineSvrConfig;
- (BOOL)canSvrConfigApplyOnEngine;
- (id)scanCombineSvrVersion;
- (BOOL)scanCombineSvrFuckupControl;
- (BOOL)scanCombineSvrPreloadControl;
- (long long)scanCombineSvrRequestInterval;
- (long long)scanCombineSvrRequestMinInterval;
- (long long)scanCombineSvrUploadTimeout;
- (long long)scanCombineSvrRetrievalTimeout;
- (id)scanCombineSvrGuideText;
- (id)scanCombineSvrDetGuideText;
- (void)updateCurrentModelInfo;
- (id)currentModelInfo;
- (BOOL)shouldAlertScanFailForReboot;
- (void)increaseBlockCountAndCheckAlert;
- (void)recordNotRecievingBufferInShortTerm:(BOOL)a0;
- (void)recordNotRecievingBufferInLongTerm:(BOOL)a0;
- (void)recordOnRecievedBuffer;
- (void)reportOnAlertForReboot;
- (BOOL)scanCombineDetectByServerFallbak;
- (void)setSvrFallbackStopControl:(BOOL)a0;
- (long long)getSvrFallbackFrameLimit;
- (void).cxx_destruct;

@end
