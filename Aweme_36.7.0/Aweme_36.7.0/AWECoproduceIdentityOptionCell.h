@class UILabel, UIImageView, UIView;

@interface AWECoproduceIdentityOptionCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *limitLabelContainer;
@property (retain, nonatomic) UILabel *limitLabel;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIImageView *selectImageView;

- (void)setUI;
- (void)updateSelected:(BOOL)a0;
- (void)updateTitleText:(id)a0 isSelected:(BOOL)a1;
- (void)updateTitleText:(id)a0 descText:(id)a1 limitCounts:(long long)a2 isSelected:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
