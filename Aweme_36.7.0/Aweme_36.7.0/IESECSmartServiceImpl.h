@class NSString, IESCombineFeatureConfig;
@protocol FurionSmartCommonServiceProtocol;

@interface IESECSmartServiceImpl : NSObject <IESECSmartService>

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)featureCenterEvent:(id)a0;
- (id)initWithName:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (id)lastResult;

@end
