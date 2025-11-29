@class NSString;

@interface AWETemplateCommonUtil : HTSService <AWETemplateCommonUtil>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentSelectedCityCode;
+ (id)currentCutsameSDKVersion;
+ (id)currentEffectPlatformSDKVersion;
+ (id)iconForCollectedState;
+ (id)iconForUncollectedState;
+ (id)mockedJianYingAPPVersion;
+ (id)currentSupportFeatureBits;
+ (BOOL)canSupportFeatureBits:(id)a0;
+ (id)createMVCategoryModelsWithMediaModels:(id)a0;
+ (id)createMVTemplateModelsWithMediaTemplateModels:(id)a0;


@end
