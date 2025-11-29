@class ACCAnimatedButton, UIStackView, DUXBaseButton, DUXBaseLabel;

@interface AWESearchAuthorityCheckerCameraAuthorityView : UIView

@property (retain, nonatomic) DUXBaseLabel *upLabel;
@property (retain, nonatomic) DUXBaseLabel *downLabel;
@property (retain, nonatomic) ACCAnimatedButton *cameraAuthorityButton;
@property (retain, nonatomic) DUXBaseButton *closeButton;
@property (retain, nonatomic) UIStackView *authStackView;

- (void)clickCloseButton;
- (void)setupAuthoritySubviews;
- (void)setupOtherSubviews;
- (void)clickCameraAuthorityButton;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
