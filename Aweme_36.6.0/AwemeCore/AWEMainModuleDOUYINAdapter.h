@class NSString;

@interface AWEMainModuleDOUYINAdapter : NSObject <AWEMainModuleDOUYINAdapter, AWEMainModuleCommonAdapter>

@property (nonatomic) BOOL hasShownAccountPrivacyAndUserItemAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)startObserveCampaignSettings;
- (void)showIDFAIfNeededHasShownAccountPrivacyAndUserItemAlert:(BOOL)a0;
- (unsigned long long)enableNewUserSwipeUpGuideExperiment;
- (void)setupKPopManager;
- (void)startPopupIfNeed;
- (id)weakTarget;

@end
