@class UILabel, UIView;

@interface MMDetailDescriptionStyleTableViewCell : MMTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL centerTitleIfNeeded;

+ (id)cellIdentifier;
+ (double)heightForTitle:(id)a0 subTitleAttributeString:(id)a1 cellWidth:(double)a2;
+ (id)getTitleLabelFont;
+ (id)getSubTitleLabelFont;
+ (id)getTitleLabelColor;
+ (double)getLabelsLeftPadding;
+ (double)getLabelsRightPadding;
+ (double)getSeparatorLeftPadding;
+ (double)getSeparatorRightPadding;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateWithTitle:(id)a0 subTitleAttributeString:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
