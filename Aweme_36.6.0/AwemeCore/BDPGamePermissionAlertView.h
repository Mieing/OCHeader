@class BDPGamePermissionAlertViewBuilder, UIButton, BDPGamePermissionContainerView;
@protocol BDPGamePermissionViewDelegate;

@interface BDPGamePermissionAlertView : UIView

@property (retain, nonatomic) BDPGamePermissionAlertViewBuilder *builder;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) BDPGamePermissionContainerView *containerView;
@property (weak, nonatomic) id<BDPGamePermissionViewDelegate> delegate;

- (void)updateIsLandscape:(BOOL)a0;
- (void)onCloseButtonTaped:(id)a0;
- (void)onCancelButtonTaped:(id)a0;
- (void)onConfirmButtonTaped:(id)a0;
- (void)updateAlertViewLayout;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;
- (void)setupUI;

@end
