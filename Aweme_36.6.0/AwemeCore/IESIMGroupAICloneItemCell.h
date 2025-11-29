@class UIButton, IESIMAICloneItemViewModel, UILabel, BFTaskCompletionSource, UIView;
@protocol IESIMAICloneAvatarViewProtocol;

@interface IESIMGroupAICloneItemCell : UITableViewCell

@property (weak, nonatomic) BFTaskCompletionSource *task;
@property (retain, nonatomic) UIView<IESIMAICloneAvatarViewProtocol> *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *signatureLabel;
@property (retain, nonatomic) UILabel *disableLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) IESIMAICloneItemViewModel *viewModel;

- (void)renderWithViewModel:(id)a0;
- (void)p_buttonClicked;
- (void)renderWithViewModelTask:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
