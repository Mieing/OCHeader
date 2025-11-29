@class UITextView, UIImageView, UILabel, UIView, UIButton;

@interface BDPAnnouncementNormalView_HG : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UITextView *desc;
@property (retain, nonatomic) UIView *descContainerView;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (retain, nonatomic) UIButton *redirectButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ redirectAction;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)onCloseButtonClick;
- (void)setupUIWithModel:(id)a0;
- (void)onConfirmButtonClick;
- (void)onRedirectButtonClick;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutUI;

@end
