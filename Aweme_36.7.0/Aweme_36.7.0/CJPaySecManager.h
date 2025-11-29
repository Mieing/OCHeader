@class CJPayFeatureCollectorManager, NSString;

@interface CJPaySecManager : NSObject <CJPaySecService>

@property (retain, nonatomic) CJPayFeatureCollectorManager *manager;
@property (nonatomic) BOOL settingIsOpen;
@property (nonatomic) BOOL useSafeInfoCache;
@property (nonatomic) BOOL useCarrierNameCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;

- (id)buildSafeInfo:(id)a0 context:(id)a1 scene:(id)a2;
- (void)enterScene:(id)a0;
- (void)leaveScene:(id)a0;
- (id)buildSafeInfo:(id)a0 context:(id)a1;
- (void)buildSafeInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)buildCJPayInfo:(id)a0;
- (void)buildSafeInfo:(id)a0 context:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (void)aiEngineOutputUpdate:(id)a0;
- (void)getEncryptFeatures:(id)a0 isSync:(BOOL)a1 context:(id)a2 startTime:(double)a3 completion:(id /* block */)a4;
- (id)buildSafeInfoDictWithFeatures:(id)a0 encryptedFeature:(id)a1 context:(id)a2 startTime:(double)a3;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;
- (void)enableCache:(BOOL)a0;

@end
