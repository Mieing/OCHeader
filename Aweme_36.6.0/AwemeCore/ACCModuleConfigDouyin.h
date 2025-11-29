@class NSString;

@interface ACCModuleConfigDouyin : NSObject <ACCDigitalWellbeingMessage, ACCModuleConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEEffectPlatformAdapterClass;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)effectPlatformAccessKey;
- (id)effectRequestDomainString;
- (void)effectDealWithRegionDidChange;
- (void)configureExtraInfoForEffectPlatform;
- (id)effectPlatformExtraCustomParameters;
- (id /* block */)effectPlatformIOPParametersBlock;
- (BOOL)shouldUploadServiceSetOptimizationPatameter;
- (id)routerTitleUserDisplayName:(id)a0;
- (BOOL)needCheckLoginStatusWhenStartRecording;
- (BOOL)shouldTitleColorUseDefaultConfigColor;
- (BOOL)disableFilterEffectWhenUseNormalFilter;
- (BOOL)useBoldTextForCellTitle;
- (BOOL)allowCommerceChallenge;
- (BOOL)useDefaultFormatNumberPolicy;
- (id)aAWEEffectPlatformAdapter;
- (id)effectPlatformPOIParameters;
- (id)init;
- (void)dealloc;

@end
