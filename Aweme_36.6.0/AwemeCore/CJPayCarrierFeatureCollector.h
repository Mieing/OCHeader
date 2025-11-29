@class NSString, NSLock;
@protocol CJPayFeatureRecord;

@interface CJPayCarrierFeatureCollector : NSObject <CJPayFeatureCollector> {
    id<CJPayFeatureRecord> recordManager;
}

@property (copy, nonatomic) NSString *cachedCarrierName;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL useCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCarrier;
+ (id)carrierName;

- (void)setRecordManager:(id)a0;
- (id)recordManager;
- (void)beginCollect;
- (void)endCollect;
- (id)buildDeviceParams;
- (id)featureName;
- (void).cxx_destruct;
- (id)init;

@end
