@class UIImageView, UILabel;

@interface DYAQuickSwitchAddAccountTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *addAccountImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (nonatomic) BOOL isInAccountQuickSwitchPopup;

+ (id)identifier;

- (double)addAccountImageViewHeight;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
