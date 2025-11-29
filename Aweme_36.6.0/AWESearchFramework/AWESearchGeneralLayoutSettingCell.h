@class UIStackView, UIImageView, UILabel, UIView, UIButton;
@protocol AWESearchGeneralLayoutSettingCellDelegate;

@interface AWESearchGeneralLayoutSettingCell : UITableViewCell

@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *chooseButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<AWESearchGeneralLayoutSettingCellDelegate> delegate;

- (void)setupIconImageWithCellType:(long long)a0;
- (id)getTitleLabelTextWithCellType:(long long)a0;
- (id)getSubTitleLabelTextWithCellType:(long long)a0;
- (void)chooseLayout;
- (void)updateCellType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupView;

@end
