@class AWESettingPageBadgeManager, AWESettingPageBaseController, NSString;

@interface AWESettingPageBadgeAbility : NSObject <AWESettingPageBadgeAbilityProtocol>

@property (weak, nonatomic) AWESettingPageBadgeManager *weakBadgeManager;
@property (weak, nonatomic) AWESettingPageBaseController *weakController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showDotBadgeWithCompletionBlock:(id /* block */)a0;
- (id)initWithController:(id)a0 badgeManager:(id)a1;
- (void).cxx_destruct;

@end
