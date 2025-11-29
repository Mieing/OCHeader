@class NSString;
@protocol CJPayFeatureRecord;

@interface CJPayScreenCaptureFeatureCollector : NSObject <CJPayFeatureCollector> {
    id<CJPayFeatureRecord> recordManager;
}

@property (nonatomic) BOOL isCaptured;
@property (nonatomic) double lastStartCapturedTime;
@property (nonatomic) double lastEndCapturedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRecordManager:(id)a0;
- (id)recordManager;
- (void)beginCollect;
- (void)endCollect;
- (id)buildDeviceParams;
- (void)p_recordCapturedStatus;
- (id)featureName;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
