@class NSString;

@interface AWEAddMateGuideBannerManager : NSObject <AWEPublishTaskMessage, AWEAddMateGuideBannerManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)didShowBannerForType:(unsigned long long)a0 enterFrom:(id)a1;
- (BOOL)canShowBannerForType:(unsigned long long)a0;
- (id)bannerConfigForType:(unsigned long long)a0;
- (void)didClickBannerForType:(unsigned long long)a0 enterFrom:(id)a1;
- (void)didCloseBannerForType:(unsigned long long)a0 enterFrom:(id)a1;
- (void)p_notMateCanSeeSettingChange:(id)a0;
- (id)publishStoryStorageKey;
- (id)getRuleGroupForType:(unsigned long long)a0;
- (id)displayExitRuleForType:(unsigned long long)a0;
- (void)didClickBannerForType:(unsigned long long)a0 enterFrom:(id)a1 extra:(id)a2;
- (id)clickExitRuleForType:(unsigned long long)a0;
- (id)ruleGroupKeyForType:(unsigned long long)a0;
- (id)init;

@end
