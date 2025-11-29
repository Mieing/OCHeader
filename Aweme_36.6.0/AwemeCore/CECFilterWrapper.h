@class ACCCameraSubscription, NSMutableSet, NSString;
@protocol VERecorderPublicProtocol;

@interface CECFilterWrapper : NSObject <CECMomentCameraBuildListener, ACCFilterProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (retain, nonatomic) NSMutableSet *appendedFilters;
@property (retain, nonatomic) NSMutableSet *appendedByScollComposers;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)switchColorFilterIntensity:(id)a0 inFilterPath:(id)a1 inPosition:(float)a2 inLeftIntensity:(float)a3 inRightIntensity:(float)a4;
- (void)setCameraProvider:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)acc_applyFilterEffectWithPath:(id)a0;
- (void)acc_applyFilterEffect:(id)a0 intensity:(float)a1;
- (void)acc_removeAllFilter;
- (void)acc_removeComposerFilterEffect:(id)a0;
- (void)acc_removeFilterEffect:(id)a0;
- (void)replaceToComposerFilter:(id)a0 intensity:(float)a1;
- (void)acc_applyFilterEffectWithPath:(id)a0 intensity:(float)a1;
- (BOOL)hadAppendFilter:(id)a0;
- (void)acc_appendFilterEffect:(id)a0 position:(float)a1 isLeftSide:(BOOL)a2;
- (void)onCameraInit:(id)a0;
- (float)acc_filterEffectOriginIndensity:(id)a0;
- (void)acc_applyFilterEffect:(id)a0;
- (BOOL)switchColorLeftFilter:(id)a0 rightFilter:(id)a1 inPosition:(float)a2 inLeftIntensity:(float)a3 inRightIntensity:(float)a4;
- (void)applyLogFilterParam:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
