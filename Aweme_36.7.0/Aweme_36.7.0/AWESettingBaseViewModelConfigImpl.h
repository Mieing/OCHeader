@class NSString, AWESettingBaseViewModel;

@interface AWESettingBaseViewModelConfigImpl : NSObject <AWEComplianceMessage, AWESettingBaseViewModelBizAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESettingBaseViewModel *weakObject;

+ (void)_aweLazyRegisterLoad;
+ (void)configInit;

- (void)listControlDidChange;
- (id)settingItemModelWithType:(long long)a0 registerAtViewModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
