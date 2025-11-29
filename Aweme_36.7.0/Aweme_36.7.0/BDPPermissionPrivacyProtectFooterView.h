@class NSString, BDPAboutPrivacyRegulationContentView, NSDictionary, BDPCheckBox;
@protocol BDPPrivacyRegulationViewDelegate, BDPPermissionPrivacyProtectFooterViewDelegate;

@interface BDPPermissionPrivacyProtectFooterView : UIView <BDPPrivacyRegulationContentViewDelegate, BDPPermissionPrivacyProtectButtonViewDelegate>

@property (nonatomic) BOOL fromPolicies;
@property (nonatomic) BOOL hasSetupDelegate;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate> privacyDelegate;
@property (weak, nonatomic) BDPCheckBox *checkBox;
@property (weak, nonatomic) BDPAboutPrivacyRegulationContentView *labelView;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *policies;
@property (weak, nonatomic) id<BDPPermissionPrivacyProtectFooterViewDelegate> footerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickReport:(id)a0;
- (void)onClickPersonalizedProtocol:(id)a0;
- (void)onClickPrivacyProtocol:(id)a0;
- (void)onClickText:(id)a0;
- (void)setCheckBoxSelectedIfNeeded;
- (id)initWithName:(id)a0 policies:(id)a1;
- (void)confirmButtonDidClickedWhileNotAllowed;
- (void)p_setupDelegate;
- (void)onCheckBoxClicked:(long long)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
