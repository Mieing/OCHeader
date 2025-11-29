@class NSString, RTVVoipSession;
@protocol RTVVoipConfigureManagerInterface, RTVUserProfileManagerInterface, RTVXRControllerInjector;

@interface __RTVVoipFeatureCheckController : NSObject <RTVVoipFeatureCheckController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)isPermittedValue:(long long)a0 ofFeature:(long long)a1;
- (BOOL)__checkSettingsWithFeatureValue:(long long)a0 feature:(long long)a1;
- (id)__selfFeatures;
- (id)__mergedFeaturesWithParticipatorID:(id)a0;
- (id)__featuresWithParticipatorID:(id)a0;
- (BOOL)isPermittedValue:(long long)a0 ofFeature:(long long)a1 forUser:(id)a2;
- (void).cxx_destruct;

@end
