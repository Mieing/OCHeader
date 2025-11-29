@class CXCallObserver, NSString;
@protocol CJPayFeatureRecord;

@interface CJPayCallFeatureCollector : NSObject <CXCallObserverDelegate, CJPayFeatureCollector> {
    id<CJPayFeatureRecord> recordManager;
}

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (nonatomic) BOOL isCalling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareCallObserver;

- (void)setRecordManager:(id)a0;
- (id)recordManager;
- (BOOL)settingsOpt;
- (void)beginCollect;
- (void)endCollect;
- (id)buildDeviceParams;
- (id)featureName;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;

@end
