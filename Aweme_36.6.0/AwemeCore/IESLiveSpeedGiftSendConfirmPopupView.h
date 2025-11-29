@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveSpeedGiftSendConfirmPopupView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *noAlertImageView;
@property (retain, nonatomic) UILabel *noAlertLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL disableAlert;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)tapNoAlert;
- (void)tapCancel;
- (void)tapConfirm;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performShowAnimation;
- (void)setupUI;

@end
