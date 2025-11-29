@class UIImageView, UILabel, UIView;

@interface MMCheckExpandStyleTableViewCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *leftCheckMark;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *lineView;

+ (id)cellIdentifier;
+ (double)heightForTitle:(id)a0 cellWidth:(double)a1;
+ (double)heightForTitle:(id)a0 subTitle:(id)a1 cellWidth:(double)a2;
+ (double)getCheckmarkLeftPadding;
+ (double)getTitleLabelLeftPadding;
+ (double)getTitleLabelRightPadding;
+ (double)getRightArrowRightPadding;
+ (id)getTitleLabelColor;
+ (id)getTitleLabelFont;
+ (double)getSeparatorLeftPadding;
+ (double)getSeparatorRightPadding;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)toggleArrowHidden:(BOOL)a0;
- (void)initView;
- (void)updateWithTitle:(id)a0 isChecked:(BOOL)a1 isExpanded:(BOOL)a2 checkColor:(id)a3;
- (void)updateWithTitle:(id)a0 subTitle:(id)a1 isChecked:(BOOL)a2 isExpanded:(BOOL)a3 checkColor:(id)a4;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
