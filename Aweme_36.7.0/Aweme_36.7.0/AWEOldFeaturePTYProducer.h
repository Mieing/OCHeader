@class NSLock, NSMutableDictionary, NSString;

@interface AWEOldFeaturePTYProducer : NSObject <PTYIFeatureProducer>

@property (retain, nonatomic) NSMutableDictionary *configCache;
@property (retain, nonatomic) NSLock *configCacheLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getStrFeature:(id)a0 extParams:(id)a1;
- (float)getNumicFeature:(id)a0 extParams:(id)a1;
- (id)getSeqFeature:(id)a0 extParams:(id)a1;
- (id)getDictFeature:(id)a0 extParams:(id)a1;
- (id)getHARSensorDataWithFeatureName:(id)a0 extParams:(id)a1;
- (id)getFeaturesFromIESFCWithExtParams:(id)a0;
- (void).cxx_destruct;
- (id)groupName;
- (id)init;

@end
