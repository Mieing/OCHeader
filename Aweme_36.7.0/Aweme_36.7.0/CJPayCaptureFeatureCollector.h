@class CJPayIntentionFeature, NSLock, NSString;
@protocol CJPayFeatureRecord;

@interface CJPayCaptureFeatureCollector : NSObject <CJPayFeatureCollector> {
    id<CJPayFeatureRecord> recordManager;
}

@property (nonatomic) BOOL isAllowRunning;
@property (retain, nonatomic) CJPayIntentionFeature *latestFeature;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRecordManager:(id)a0;
- (id)recordManager;
- (void)p_screenShotDetected;
- (void)beginCollect;
- (void)endCollect;
- (id)buildIntentionParams;
- (id)buildDeviceParams;
- (id)featureName;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
