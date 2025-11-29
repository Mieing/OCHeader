@class UIImageView, UILabel, UIView;

@interface IESECShopBubbleView : UIView

@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) long long style;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) double extraOffset;

- (id)initWithBubbleText:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupView;
- (void)updateBackgroundColor:(id)a0;

@end
