@class UIStackView, UIView, DUXPluralAvatar, UIButton, DYSyncToutiaoItemCell, DUXButton, UIViewController, UILabel;

@interface DYSyncToToutiaoAlertView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXPluralAvatar *avatarIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) DYSyncToutiaoItemCell *videoCell;
@property (retain, nonatomic) DYSyncToutiaoItemCell *profileCell;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ requestAction;
@property (nonatomic) unsigned long long platformType;
@property (weak, nonatomic) UIViewController *viewController;

- (void)didClickConfirmButton;
- (void)p_dismiss;
- (void)p_handlePanGesture:(id)a0;
- (void)p_handleTapGesture:(id)a0;
- (void)createCellWithAlertItemType:(long long)a0 clickedSwitchType:(long long)a1;
- (void)handleRequestIfClickConfirm:(BOOL)a0;
- (id)initWithAlertItemType:(long long)a0 clickedSwitchType:(long long)a1 platformType:(unsigned long long)a2 requestAction:(id /* block */)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
