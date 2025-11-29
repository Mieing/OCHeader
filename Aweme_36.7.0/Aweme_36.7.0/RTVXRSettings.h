@class NSDictionary, NSArray, NSString;

@interface RTVXRSettings : JSONModel <RTVXRSettingsInterface>

@property (copy, nonatomic) NSDictionary *fuseConfig;
@property (nonatomic) BOOL enableThrottler;
@property (nonatomic) BOOL receiverHangupRTCEmptyEnable;
@property (nonatomic) BOOL enableRTCMultipleDelegateThreadSafe;
@property (nonatomic) BOOL enableNewController;
@property (nonatomic) BOOL enableExceptionCheckTool;
@property (nonatomic) BOOL enableOpenSpeakerphoneBeforeJoinRoom;
@property (nonatomic) BOOL enableOptimizeOnTheCallWhenAudioFirstArrived;
@property (nonatomic) BOOL enableTrackDegradeCount;
@property (nonatomic) BOOL enableOntheCallInAppBackgroundState;
@property (nonatomic) BOOL enableCreateMPVolumeView;
@property (nonatomic) BOOL enablePatchFilter;
@property (nonatomic) BOOL enablePollingKeepAlive;
@property (nonatomic) BOOL useAudioCommunicationMode;
@property (nonatomic) BOOL enableFeedVolumeOptimize;
@property (nonatomic) BOOL disableReverseAudioScenarioOrder;
@property (nonatomic) BOOL byteRTCEnableSpeakerOptimization;
@property (nonatomic) BOOL optimizeAudioRouteChangeManner;
@property (nonatomic) BOOL enableMultiDeviceOptimize;
@property (copy, nonatomic) NSArray *stickerCategoryBlockList;
@property (copy, nonatomic) NSArray *stickerBlockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;
+ (id)createSettingWithInjector:(id)a0;

- (int)intValueForKey:(id)a0;
- (id)arrayValueForKey:(id)a0;
- (float)floatSettingValueForKey:(id)a0;
- (int)intValueForKey:(id)a0 defaultValue:(int)a1;
- (void).cxx_destruct;
- (BOOL)boolValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;

@end
