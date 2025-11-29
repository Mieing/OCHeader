@class UILabel, UIImageView, UIView;

@interface CJPayUnionBindCardChooseHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIView *subContentView;

- (void)updateWithUnionPaySignInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateTitle:(id)a0;

@end
