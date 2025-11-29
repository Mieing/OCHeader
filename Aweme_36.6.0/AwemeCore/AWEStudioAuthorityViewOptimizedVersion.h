@class UIStackView, NSString, NSDictionary, UILabel, UIButton;

@interface AWEStudioAuthorityViewOptimizedVersion : UIView <AWEStudioAuthorityViewProtocol>

@property (retain, nonatomic) UIStackView *authStackView;
@property (nonatomic) unsigned long long requiredPermission;
@property (retain, nonatomic) UILabel *upLabel;
@property (retain, nonatomic) UILabel *downLabel;
@property (retain, nonatomic) UIButton *cameraAuthorityBtn;
@property (retain, nonatomic) UIButton *mikeAuthorityBtn;
@property (copy, nonatomic) id /* block */ didClickedCameraAuthorityBtn;
@property (copy, nonatomic) id /* block */ didClickedMikeAuthorityBtn;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSDictionary *referExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstanceForRecordControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUserGrantedBlock:(id /* block */)a1;
+ (void)acc_jumpToApplicationSystemSetting;
+ (void)acc_jumpToApplicationSystemSettingWithPermissionType:(long long)a0;

- (void)setCameraAuthoritySelected:(BOOL)a0;
- (void)setMikeAuthoritySelected:(BOOL)a0;
- (void)configAccessibilityElements;
- (void)updateWithRequiredPermission:(unsigned long long)a0;
- (void)updateCameraWidthConstraintsWhenRestricted;
- (void)updateMikeWidthConstraintsWhenRestricted;
- (void)trackPermissionToastShow:(id)a0 landingType:(id)a1;
- (void)trackPermissionToastResult:(id)a0 result:(id)a1;
- (void)trackPermissionToastClick:(id)a0 landingType:(id)a1 clickType:(id)a2 clickPosition:(id)a3;
- (void)didClickedCameraAuthorityBtn:(id)a0;
- (void)didClickedMikeAuthorityBtn:(id)a0;
- (void)acc_jumpToApplicationSystemSetting:(id)a0 description:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
