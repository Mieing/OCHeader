@class NSString, UIImageView, UILabel, UIView;

@interface HoneyPayNormalCardView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *backgroundIcon;
@property (retain, nonatomic) UILabel *cardTypeLabel;
@property (copy, nonatomic) NSString *payerUserName;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
