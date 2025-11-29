@class CJPayStyleCheckMark, UIImageView, UILabel, UIView;

@interface CJPayUnionBindCardChooseTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *bankCardLabel;
@property (retain, nonatomic) CJPayStyleCheckMark *selectView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIView *disabledView;
@property (nonatomic) BOOL isSelected;

- (void)updateWithUnionCardInfoModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
