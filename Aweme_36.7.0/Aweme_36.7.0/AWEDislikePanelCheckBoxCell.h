@class AWEDislikeRealDimension, UIImageView, UILabel, DUXCheckBox;
@protocol AWEDislikePanelCheckBoxCellDelegate;

@interface AWEDislikePanelCheckBoxCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) AWEDislikeRealDimension *dislikeInfo;
@property (weak, nonatomic) id<AWEDislikePanelCheckBoxCellDelegate> delegate;

- (void)changeCheckBoxStatus;
- (void)responseToDelegate;
- (void)didChecked:(id)a0;
- (void)configWithDislikeModel:(id)a0;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
