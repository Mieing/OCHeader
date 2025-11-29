@class BDPButton;
@protocol BDPPermissionBaseButtonViewDelegate;

@interface BDPPermissionAlertBaseButtonView : UIView

@property (weak, nonatomic) BDPButton *cancelButton;
@property (weak, nonatomic) BDPButton *confirmButton;
@property (weak, nonatomic) id<BDPPermissionBaseButtonViewDelegate> delegate;

- (void)onCancelButtonTaped:(id)a0;
- (void)onConfirmButtonTaped:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
