@class NSArray, NSDictionary, NSString, AWEStudioComposerPublishPageConfig;
@protocol AWEPostPageContext;

@interface AWEPostPageFeatureConfigHandler : NSObject <AWEPostPageFeatureConfigService>

@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (retain, nonatomic) AWEStudioComposerPublishPageConfig *publishConfig;
@property (retain, nonatomic) NSArray *registeredCustomizedElementClasses;
@property (retain, nonatomic) NSDictionary *registeredFeatureConfigClassElementClassDict;
@property (retain, nonatomic) NSDictionary *registeredElementClassFeatureConfigClassDict;
@property (retain, nonatomic) NSArray *enabledFeatureConfigs;
@property (retain, nonatomic) NSArray *enabledCustomizedFeatureConfigs;
@property (retain, nonatomic) NSArray *allEnabledFeatureConfigs;
@property (retain, nonatomic) NSDictionary *enabledElementFeatureConfigDict;
@property (retain, nonatomic) NSArray *runtimeEnabledCustomizedElementClasses;
@property (retain, nonatomic) NSArray *allEnabledElementClasses;
@property (retain, nonatomic) NSArray *enabledFeatureElementClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)basicFeature;
- (void)bindServices:(id)a0;
- (id)allEnabledElements;
- (id)featureConfigWithElementClass:(Class)a0;
- (id)featureConfigWithFeatureClass:(Class)a0;
- (void)handlePublishConfig;
- (void)handleBasicFeature;
- (void).cxx_destruct;
- (BOOL)enabled;

@end
