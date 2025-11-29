@class NSRecursiveLock, NSString, CameraScannerViewWrapper, NSMutableSet, CameraScanGoodsJSAPIInfo, NSObject, CameraScanGoodsAdInfo;
@protocol OS_dispatch_queue, GoodsScannerDelegate;

@interface GoodsScanner : MMUIView <CNetworkStatusExt, IScanGoodsServiceExt, CameraScannerViewDelegate> {
    float _scaleRatio;
    struct CGPoint { double x; double y; } _cropInputOrigin;
}

@property (nonatomic) void *focusEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue;
@property (nonatomic) BOOL isDecoding;
@property (nonatomic) BOOL isUseAlbumSnapshot;
@property (retain, nonatomic) NSString *configVersion;
@property (retain, nonatomic) NSMutableSet *requestIDSet;
@property (nonatomic) int albumFrameID;
@property (nonatomic) BOOL isSvrRespDetectFail;
@property (nonatomic) unsigned int clearFrameWidth;
@property (nonatomic) unsigned int clearFrameHeight;
@property (nonatomic) char *clearFrameData;
@property (nonatomic) struct opaqueCMSampleBuffer { } *currentSampleBuffer;
@property (retain, nonatomic) NSRecursiveLock *variablesLock;
@property (weak, nonatomic) CameraScannerViewWrapper *cameraScannerWrapper;
@property (nonatomic) long long businessType;
@property (nonatomic) long long businessSubType;
@property (retain, nonatomic) CameraScanGoodsAdInfo *adInfo;
@property (retain, nonatomic) CameraScanGoodsJSAPIInfo *jsapiInfo;
@property (nonatomic) BOOL hasReportWhenOpenHalfScreenPage;
@property (nonatomic) unsigned int tabSessionIDForReport;
@property (nonatomic) unsigned int scanSessionIDForReport;
@property (weak, nonatomic) id<GoodsScannerDelegate> delegate;
@property (nonatomic) unsigned long long sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calcuatePhashMemInfoForPicture:(id)a0 confStr:(id)a1;

- (id)initWithCameraScannerViewWrapper:(id)a0 businessType:(long long)a1 businessSubType:(long long)a2 adInfo:(id)a3 jsapiInfo:(id)a4;
- (void)dealloc;
- (BOOL)isRequestIDInSet:(id)a0;
- (void)addRequestIDToSet:(id)a0;
- (void)removeRequestIDFromSet:(id)a0;
- (void)removeAllRequestIDFromSet;
- (struct opaqueCMSampleBuffer { } *)getAndRetainCurrentSampleBuffer;
- (void)releaseCurrentSampleBuffer;
- (void)setupEngineQueue;
- (void)setupFocusEngine;
- (void)deallocFocusEngine;
- (void)cancelAllCallback;
- (void)start;
- (void)stop;
- (BOOL)scanOnePicture:(id)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)handleRotatedImageBuffer:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (id)getCameraSnapshotImage;
- (id)getImageBySampleBufferref:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3;
- (void)onFetchScanConfigureSuccess:(id)a0 confVersion:(id)a1;
- (void)onFetchScanConfigureFail:(long long)a0 errorMsg:(id)a1;
- (void)onFetchDynamicWordingSuccess:(id)a0;
- (void)onFetchDynamicWordingFail:(long long)a0 errorMsg:(id)a1;
- (void)onSendImageInfoSuccess:(id)a0;
- (void)onSendImageInfoFail:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 isNetworkError:(BOOL)a3;
- (id)requestIDForSessionID:(unsigned long long)a0 frameID:(unsigned int)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)setFocusEngineNetworkType;
- (void)recordTabSessionID:(unsigned int)a0 scanSessionID:(unsigned int)a1;
- (void)reportAIEngineInfoWhenDetectSuccess;
- (void)reportAIEngineInfoWithResultAction:(long long)a0 tabSessionID:(unsigned int)a1 scanSessionID:(unsigned int)a2;
- (id)getInfoTextForCurrentLanguage;
- (unsigned int)getInfoTextUpdateTime;
- (id)memoryMappedKV;
- (void).cxx_destruct;

@end
