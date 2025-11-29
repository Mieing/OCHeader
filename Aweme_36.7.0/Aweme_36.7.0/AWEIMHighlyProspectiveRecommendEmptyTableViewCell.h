@class UILabel, UIButton;

@interface AWEIMHighlyProspectiveRecommendEmptyTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *openButton;

- (void)__setupUI;
- (BOOL)hasOpenHighlyProspective;
- (void)__setupLayout;
- (void)renderWithTitle:(id)a0 subTitle:(id)a1 emptyType:(long long)a2 provider:(id)a3;
- (BOOL)currentIsUnOpenHighlyProspective;
- (void)openHighlyProspective;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
