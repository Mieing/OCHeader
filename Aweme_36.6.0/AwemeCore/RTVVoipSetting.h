@class RTVVoipConfig, RTVVoipSettingsFeature, NSArray, RTVVoipStyleConfiguration, NSNumber, RTVVoipPollingSettings;
@protocol Optional;

@interface RTVVoipSetting : JSONModel

@property (retain, nonatomic) RTVVoipConfig *voipConfig;
@property (retain, nonatomic) NSNumber<Optional> *screenRecordEnableValue;
@property (retain, nonatomic) NSNumber *enableValue;
@property (retain, nonatomic) NSNumber *callerTimeOutValue;
@property (retain, nonatomic) NSNumber *receiverTimeOutValue;
@property (retain, nonatomic) NSNumber *afterJoinTimeOutValue;
@property (retain, nonatomic) NSNumber *voipCallPollingPullSwitch;
@property (retain, nonatomic) NSNumber *voipCallPollingRoomInfoIntervalValue;
@property (retain, nonatomic) RTVVoipSettingsFeature<Optional> *featureModel;
@property (retain, nonatomic) NSNumber *selfAdaptSizeEnableValue;
@property (retain, nonatomic) NSNumber *refreshVoipInBackgroundIntervalValue;
@property (retain, nonatomic) NSNumber<Optional> *autoStopVideoCaptureEnableValue;
@property (retain, nonatomic) RTVVoipStyleConfiguration<Optional> *styleConfig;
@property (retain, nonatomic) NSNumber<Optional> *backgroundProtectionEnableValue;
@property (retain, nonatomic) NSArray *narrowViewDisableModel;
@property (nonatomic) BOOL preloadJoinRoomBugfixSetting;
@property (retain, nonatomic) NSNumber *enableMixSessionOf1v1;
@property (retain, nonatomic) NSNumber *enableMixSessionOfGroup;
@property (retain, nonatomic) NSNumber *disableMuteAudioBeforeFirstFrame;
@property (retain, nonatomic) NSNumber<Optional> *teenDegradeCacheValidTime;
@property (retain, nonatomic) NSArray<Optional> *ignoreRelationshipCheck;
@property (retain, nonatomic) NSNumber<Optional> *inviteMaxRecentUserCount;
@property (retain, nonatomic) RTVVoipPollingSettings<Optional> *pollingSettings;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)isGroupVoipEnable;
- (BOOL)narrowViewEnable;
- (long long)refreshVoipInBackgroundInterval;
- (long long)receiverTimeOut;
- (BOOL)enableAutoStopVideoCapture;
- (long long)afterJoinTimeOut;
- (BOOL)isFirstFrameTimeOptimizeEnable;
- (long long)callerTimeOut;
- (BOOL)groupVoipPrejoinRoom;
- (BOOL)selfAdaptSizeEnable;
- (BOOL)enableScreenRecord;
- (BOOL)enableVoipCallPollingPull;
- (BOOL)backgroundProtectionEnable;
- (long long)teenDegradeCacheValidTimeMillisecond;
- (BOOL)enable;
- (void).cxx_destruct;

@end
