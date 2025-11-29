@class IESMMCameraConfig, NSString;
@protocol AWEPropApplyContextProtocol;

@interface AWEPropApplyNormalStrategy : NSObject <ACCCameraBuildListener, AWEPropApplyStrategyProtocol>

@property (retain, nonatomic) id<AWEPropApplyContextProtocol> context;
@property (retain, nonatomic) IESMMCameraConfig *normalPropCameraConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCameraInit:(id)a0;
- (id)initWithApplyContext:(id)a0;
- (void)applyProp:(id)a0;
- (BOOL)isNormalCameraConfig:(id)a0;
- (BOOL)canApplyProp:(id)a0;
- (void)preparePropApplyWithProp:(id)a0 currentProp:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
