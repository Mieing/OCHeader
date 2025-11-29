@class UIImageView, AWEIMFansGroupPrivilegeEscalationViewModel, UILabel, UIButton;

@interface AWEIMFansGroupPrivilegeEscalationViewController : AWEIMHalfScreenContainerViewController

@property (retain, nonatomic) AWEIMFansGroupPrivilegeEscalationViewModel *viewModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *transferButton;
@property (retain, nonatomic) UIButton *confirmButton;

+ (double)__subtitleHeightWithContent:(id)a0;
+ (double)__preferredContentHeightWithSubTitleText:(id)a0;

- (void)__setupUI;
- (void)__configViewModel;
- (void)__handleCloseButtonCkicked:(id)a0;
- (void)__handleTransferButtonCkicked:(id)a0;
- (void)__handleConfirmButtonCkicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
