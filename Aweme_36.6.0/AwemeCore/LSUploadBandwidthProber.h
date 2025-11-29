@class NSString, NSDictionary, NSOperationQueue, LSUploadBandwidthAliveKeeper, NSObject;
@protocol OS_dispatch_semaphore;

@interface LSUploadBandwidthProber : NSObject {
    struct unique_ptr<avframework::RTMPUploadBWProbe, std::default_delete<avframework::RTMPUploadBWProbe>> { struct __compressed_pair<avframework::RTMPUploadBWProbe *, std::default_delete<avframework::RTMPUploadBWProbe>> { struct RTMPUploadBWProbe *__value_; } __ptr_; } rtmpUploadBWTest;
    struct unique_ptr<avframework::LSUploadBandwidthProberObs, std::default_delete<avframework::LSUploadBandwidthProberObs>> { struct __compressed_pair<avframework::LSUploadBandwidthProberObs *, std::default_delete<avframework::LSUploadBandwidthProberObs>> { struct LSUploadBandwidthProberObs *__value_; } __ptr_; } rtmpUploadBWTestObs;
    NSObject<OS_dispatch_semaphore> *_optimumSignal;
    NSString *_tcUrl;
}

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *serverSessionId;
@property (copy, nonatomic) NSDictionary *nodeProbeInfo;
@property (retain, nonatomic) NSOperationQueue *taskOperationQueue;
@property (nonatomic) int probeIpCostTime;
@property (retain, nonatomic) LSUploadBandwidthAliveKeeper *myAliveKeeper;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *historyResolution;
@property (copy, nonatomic) NSString *maxResolution;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (nonatomic) BOOL fixAnr;
@property (nonatomic) BOOL enableNeptuneSessionId;
@property (nonatomic) BOOL enableInternalTimer;
@property (nonatomic) BOOL enableDnsOptimize;
@property (copy, nonatomic) id /* block */ updateOptimumIPAddressBlock;
@property (copy, nonatomic) id /* block */ excuteWithCommandAndUserInfoBlock;
@property (copy, nonatomic) id /* block */ bandwidthStateBlock;
@property (copy, nonatomic) id /* block */ bandwidthResultBlock;
@property (copy, nonatomic) id /* block */ bandwidthResultEventBlock;

- (id)convertToJsonData:(id)a0 compress:(BOOL)a1;
- (id)getTcUrl;
- (void)__setupRtmpUploadBWTest;
- (void)__updateRtmpOpt;
- (id)__shouldUpdateOptimumURL;
- (id)__getNodeOptimizedTrackInfo;
- (void)__sendLogInfoToRtmpUploadBWTest:(id)a0;
- (id)__setServeSessionIdForUrl:(id)a0;
- (id)__setSessionIdForUrl:(id)a0;
- (id)modifyRtmpUrlWithPorts:(id)a0 sdkParams:(id)a1;
- (id)__getNodeProbeIpWithTimeoutAndHost:(id)a0;
- (id)__getNodeProbeIpWithHost:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id).cxx_construct;
- (void)start;

@end
