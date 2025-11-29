@class UIImageView, AWESelfDigitalControlCellModel, UILabel, UIView;

@interface AWESelfDigitalControlCell : UITableViewCell

@property (retain, nonatomic) UIView *cellBackgroundView;
@property (retain, nonatomic) UIView *cellMaskView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) AWESelfDigitalControlCellModel *model;

+ (id)identifier;

- (void)setMaskViewColor:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
