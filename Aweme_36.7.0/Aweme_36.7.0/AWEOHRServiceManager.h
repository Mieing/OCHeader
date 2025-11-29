@class NSString, NSTimer, NSDictionary, AWEOHRTouchFeatureRecordHelper, NSMutableArray;
@protocol OHRTouchAreaResult, OHRHoldHandResult, OHRResult, AWEStorageServiceKVInterface, HARSensorData, OHRWetHandResult;

@interface AWEOHRServiceManager : HTSService <AWEOHRServiceManager, OHRServiceDelegate> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long hand;
@property (retain, nonatomic) id<OHRResult> ohrResult;
@property (retain, nonatomic) id<OHRWetHandResult> whrResult;
@property (retain, nonatomic) id<OHRHoldHandResult> hhrResult;
@property (nonatomic) double confidence;
@property (nonatomic) long long mostUsedHand;
@property (nonatomic) long long recentlyUsedHand;
@property (nonatomic) long long lastSessionMostUsedHand;
@property (nonatomic) BOOL isCrossedHand;
@property (nonatomic) double interval;
@property (nonatomic) BOOL enableHistoryRecorder;
@property (nonatomic) double yVarianceThreshold;
@property (nonatomic) long long windowLength;
@property (nonatomic) BOOL enableWhr;
@property (nonatomic) BOOL enableHhr;
@property (retain, nonatomic) NSTimer *scheduleStartTimer;
@property (nonatomic) long long historyLeftHandUseCount;
@property (nonatomic) long long historyRightHandUseCount;
@property (nonatomic) long long currentSessionLeftHandUseCount;
@property (nonatomic) long long currentSessionRightHandUseCount;
@property (nonatomic) long long recentlyLeftHandCount;
@property (nonatomic) long long recentlyRightHandCount;
@property (retain, nonatomic) NSMutableArray *lastHandList;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> storageHandler;
@property (nonatomic) BOOL shouldAddFeatureToPitaya;
@property (readonly, nonatomic) NSDictionary *ohrABConfigDict;
@property (retain, nonatomic) id<HARSensorData> harSensorData;
@property (nonatomic) long long harSensorDataUpdateTimeMs;
@property (retain, nonatomic) AWEOHRTouchFeatureRecordHelper *touchFeatureRecordHelper;
@property (readonly, nonatomic) id<OHRTouchAreaResult> lastPredictTouchArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithInterval:(double)a0;
- (void)clearOHRPredictRecord;
- (id)screenClickPositionList;
- (id)screenClickPositionListV2;
- (id)userActionTypeList;
- (void)onOHRPredictChangedDetail:(id)a0;
- (BOOL)shouldInterceptPredictWithTouchEvents:(id)a0;
- (void)onOHRWetHandPredictChangedDetail:(id)a0;
- (void)onOHRHoldHandPredictChangedDetail:(id)a0;
- (void)onOHREngineCollectTouch:(id)a0;
- (long long)calculateMostUsedHand:(long long)a0;
- (long long)calculateRecentlyUsedHand:(long long)a0;
- (void)recordSessionUsedHand:(long long)a0;
- (long long)calculateMostUsedHandWithLeftCount:(long long)a0 rightCount:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)loadData;
- (void)saveData;

@end
