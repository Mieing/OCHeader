@class NSString, AWESettingPageContext;
@protocol AWESettingPageBadgeAbilityProtocol;

@interface AWESettingPageBaseController : NSObject <AWESettingPageBaseControllerProtocol>

@property (readonly, nonatomic) id<AWESettingPageBadgeAbilityProtocol> badgeAbility;
@property (readonly, copy, nonatomic) AWESettingPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBadgeAbility:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
