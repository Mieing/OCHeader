@interface BDByteScreenCastDurationModel : NSObject

@property (nonatomic) long long currentVideoTotalDuration;
@property (nonatomic) long long currentVideoSegmentDuration;
@property (nonatomic) long long videoPlayStartTime;
@property (nonatomic) unsigned long long currentVideoStartTime;
@property (nonatomic) long long searchDurationTriggedByUser;
@property (nonatomic) long long durationBetweenTryCast;
@property (nonatomic) double lifeCycleStartTime;
@property (nonatomic) double tryToCastMediaStartTime;
@property (nonatomic) double fetchMediaStartTime;
@property (nonatomic) double deviceConnectStartTime;
@property (nonatomic) double connectingStartTime;
@property (nonatomic) double searchStartTime;
@property (nonatomic) double firstTimeSearchStartTime;
@property (nonatomic) double startMediaLoadingTime;
@property (nonatomic) double lastProgressUpdateTime;
@property (nonatomic) double enterSearchDevicesTime;
@property (nonatomic) double registeStartTime;
@property (nonatomic) double identifyStartTime;
@property (readonly, nonatomic) long long durationBetweenMediaLoading;

- (unsigned long long)currentVideoPlayDuration;
- (void)castPlayDidFinish;
- (double)timeIntervalSinceLastProgressUpdateTime;
- (void)castPlayStalled;
- (void)castPlayResumed;
- (long long)fromTryToCastMediaToCurrentTime;
- (void)updateDurationIfNeeded;
- (void)startRegisterSDK;
- (void)startRequestIdentifyInfo;
- (void)lifeCycleDidStart;
- (void)enterSearchDevices;
- (void)startSearchDevices:(BOOL)a0;
- (void)startConnectDeviceByUser;
- (void)didConnectToDeviceByUser;
- (void)startFetchMedia;
- (void)startMediaLoading;
- (void)readyToCastPlayAtPosition:(unsigned long long)a0;
- (void)updateDurationBetweenTryCast;
- (long long)fromSDKRegisteToCurrentTime;
- (long long)fromRequestIdentifyToCurrentTime;
- (long long)fromLifeCycleStartToCurrentTime;
- (long long)fromStartSearchDevicesToCurrentTime;
- (long long)fromFirstTimeStartSearchDevicesToCurrentTime;
- (long long)fromEnterSearchDevicesToCurrentTime;
- (long long)fromConnectDeviceToCurrentTime;
- (long long)fromDidConnectToDeviceToCurrentTime;
- (long long)fromStartFetchMediaToCurrentTime;
- (void)updateLastProgressUpdateTime;
- (void)reset;

@end
