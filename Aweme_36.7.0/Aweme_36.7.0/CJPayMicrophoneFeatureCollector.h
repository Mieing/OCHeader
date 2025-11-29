@class NSLock, NSString;
@protocol CJPayFeatureRecord;

@interface CJPayMicrophoneFeatureCollector : NSObject <CJPayFeatureCollector> {
    id<CJPayFeatureRecord> recordManager;
}

@property (nonatomic) BOOL isMicActive;
@property (nonatomic) BOOL featInitialized;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRecordManager:(id)a0;
- (id)recordManager;
- (void)beginCollect;
- (void)endCollect;
- (id)buildDeviceParams;
- (void)p_receiveAudioNoti:(id)a0;
- (BOOL)p_isSyncFetchMicStatus;
- (void)p_updateMicStatus;
- (id)p_fetchAudioInputs;
- (id)featureName;
- (void).cxx_destruct;
- (id)init;

@end
