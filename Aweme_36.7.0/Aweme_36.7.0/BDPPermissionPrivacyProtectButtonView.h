@class NSString;
@protocol BDPPermissionPrivacyProtectButtonViewDelegate;

@interface BDPPermissionPrivacyProtectButtonView : BDPPermissionAlertBaseButtonView <BDPPermissionPrivacyProtectFooterViewDelegate>

@property (nonatomic) BOOL hasSetupDelegate;
@property (nonatomic) BOOL isConfirmAllowed;
@property (weak, nonatomic) id<BDPPermissionPrivacyProtectButtonViewDelegate> buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCancelButtonTaped:(id)a0;
- (void)onConfirmButtonTaped:(id)a0;
- (void)p_setupDelegate;
- (void)checkBoxDidClicked:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
