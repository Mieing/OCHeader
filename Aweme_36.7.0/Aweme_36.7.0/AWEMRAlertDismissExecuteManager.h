@class NSString, AWEMRAlertClosableAbilityConfigModel;

@interface AWEMRAlertDismissExecuteManager : NSObject <AWEAlertDismissExecuteDelegateProtocol>

@property (retain, nonatomic) AWEMRAlertClosableAbilityConfigModel *abilityConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
