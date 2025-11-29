@class UILabel, UIView;

@interface IESLiveGuideTitleEditPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UIView *selectedCycle;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)cellIsSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setTitle:(id)a0;
- (void)setupUI;

@end
