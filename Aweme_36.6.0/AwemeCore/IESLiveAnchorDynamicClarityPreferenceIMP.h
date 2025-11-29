@class IESLiveCoreABManager, NSHashTable, NSString, NSMutableDictionary, NSDictionary, PushStreamInfo, HTSLiveStreamUrl_LiveCoreSDKData_PushData, HTSLiveStreamUrl_LiveCoreSDKData_PushData_ResolutionParams, PushStreamInfo_Resolution;

@interface IESLiveAnchorDynamicClarityPreferenceIMP : NSObject <IESLiveAnchorDynamicClarityPreferenceService>

@property (retain, nonatomic) IESLiveCoreABManager *abManager;
@property (retain, nonatomic) NSMutableDictionary *uploadBandwidthResultModels;
@property (retain, nonatomic) NSHashTable *clarityObservers;
@property (readonly, nonatomic) BOOL allowDynamic;
@property (nonatomic) BOOL guideShowRedDot;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) BOOL showGuideBubble;
@property (nonatomic) BOOL showRecommendRedDot;
@property (nonatomic) long long liveType;
@property (copy, nonatomic) NSString *selectedQualityKey;
@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PushData *pushData;
@property (copy, nonatomic) NSDictionary *pushInfoMap;
@property (retain, nonatomic) PushStreamInfo *pushInfo;
@property (readonly, nonatomic) unsigned long long currentConfigIndex;
@property (readonly, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PushData_ResolutionParams *currentConfig;
@property (readonly, nonatomic) PushStreamInfo_Resolution *currentConfigInfo;
@property (nonatomic) long long qualityType;
@property (retain, nonatomic) NSMutableDictionary *historyQualityKeyMap;
@property (nonatomic) BOOL supportRecommendKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerClarityObserver:(id)a0;
- (BOOL)enableGuideAnchorDynamicClarity;
- (BOOL)enableAnchor1080P;
- (unsigned long long)anchorClarityFrozenDuration;
- (unsigned long long)anchorClarityAlertDuration;
- (id)videoCapturePreset;
- (id)guidePageCapturePreset;
- (struct CGSize { double x0; double x1; })outputSizeForPreset:(id)a0;
- (id)VRVideoCapturePreset;
- (struct CGSize { double x0; double x1; })VROutputSize;
- (struct CGSize { double x0; double x1; })VRLiveCaptureOutputSize;
- (id)horizontalVideoCapturePreset;
- (struct CGSize { double x0; double x1; })horizontalOutputSize;
- (struct CGSize { double x0; double x1; })horizontalLiveCaptureOutputSize;
- (BOOL)hadManualSelected;
- (id)preferenceResolutionKeyFor:(id)a0;
- (BOOL)setUploadBandwidthResultModel:(id)a0 liveType:(long long)a1 liveTab:(long long)a2;
- (id)getUploadBandwidthResultModelWithLiveType:(long long)a0;
- (id)clarityLastRecommendKey;
- (id)queryTextWithKey:(id)a0;
- (id)defaultKey;
- (void)configWithQualityKey:(id)a0;
- (void)notifyClarityObserversAtKey:(id)a0 toKey:(id)a1;
- (id)uhdKey;
- (id)getBroadcastResolutionFromStrategy;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })outputSize;
- (id)init;

@end
