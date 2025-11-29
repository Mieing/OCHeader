@class TTReachability, NSMutableDictionary, NSString, BDByteScreenCastContext, NSTimer, NSObject, BDByteCastEnvCheckManager;
@protocol OS_dispatch_queue;

@interface BDSCProblemDiagnosisCenter : NSObject <BDByteCastEnvCheckManagerDelegate>

@property (weak, nonatomic) BDByteScreenCastContext *context;
@property (retain, nonatomic) TTReachability *reachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchWiFiQueue;
@property (nonatomic) BOOL userConfirmPrivacyPopup;
@property (nonatomic) BOOL hasMulticastDevice;
@property (nonatomic) BOOL is2dot4GWiFi;
@property (nonatomic) long long multicastDeviceCount;
@property (retain, nonatomic) NSMutableDictionary *deviceInfo;
@property (copy, nonatomic) NSString *currentCodec;
@property (copy, nonatomic) NSString *currentVideoFormat;
@property (nonatomic) BOOL isVerticalLive;
@property (nonatomic) BOOL isStandardRateVideo;
@property (nonatomic) BOOL hasDevice;
@property (nonatomic) BOOL searchSuccess;
@property (nonatomic) BOOL isConnectError;
@property (nonatomic) BOOL didPushURL;
@property (nonatomic) BOOL didReceivePlayCallback;
@property (nonatomic) BOOL didReceiveStopCallback;
@property (retain, nonatomic) NSTimer *searchTimer;
@property (nonatomic) BOOL didTriggerCheckMulticast;
@property (nonatomic) BOOL didCheckMulticast;
@property (retain, nonatomic) BDByteCastEnvCheckManager *envCheckManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appReachStateChanged:(id)a0;
- (void)manager:(id)a0 onCheckStepFinishedWithType:(unsigned long long)a1;
- (void)manager:(id)a0 onCheckFinishedWithError:(id)a1 reportId:(id)a2;
- (void)requestWifiInfoIfAllowed;
- (void)checkBasicNetworkEnvironment;
- (long long)diagnoseWithType:(long long)a0;
- (void)markTryPushPlayItem:(id)a0;
- (void)checkLocalNetworkPermissionWithCompletion:(id /* block */)a0;
- (void)markHasDevice;
- (void)resetUserPlayOperation;
- (void)markConnectError;
- (void)markReceivePlayCallback;
- (void)markReceiveStopCallback;
- (void)resetUserSearchOperation;
- (void)markSearchFail;
- (void)markSearchSuccess;
- (void)appendDevices:(id)a0;
- (void)markStartSearch;
- (void)registerNetworkChangeNotification;
- (void)requestWiFiInfo;
- (void)checkMulticast;
- (long long)diagnoseAudioAndVideo;
- (long long)diagnoseFail;
- (long long)diagnoseSearch;
- (long long)diagnoseInterrupt;
- (id)networkIPWithDeviceIP:(id)a0 netMask:(id)a1;
- (BOOL)hasValidDeviceCache;
- (id)diagnoseSearchFail;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)applicationWillResignActive;

@end
