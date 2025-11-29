@class AWEIMCardStyleCellContainerView, NSString, UILabel, UIView, UIButton;
@protocol IESIMSwitchProtocol;

@interface AWEIMGroupEntryLimitsSwitchCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIView<IESIMSwitchProtocol> *switchView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMCardStyleCellContainerView *containerView;
@property (copy, nonatomic) id /* block */ showMore;
@property (nonatomic) BOOL useCardStyle;
@property (weak, nonatomic) id /* block */ changeBlock;

- (id)baseContentView;
- (void)configWithCellCornerType:(unsigned long long)a0 shouldShowLineAtCellBottom:(BOOL)a1;
- (void)clickDetailButton;
- (void)configWithTitle:(id)a0 detailText:(id)a1 switchCurrentValue:(BOOL)a2 switchChange:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
