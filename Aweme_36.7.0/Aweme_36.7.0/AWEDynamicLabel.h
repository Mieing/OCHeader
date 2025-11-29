@class UIColor, NSString, UIImageView, UIFont, UILabel, UIView;

@interface AWEDynamicLabel : UILabel

@property (retain, nonatomic) UILabel *hollowedOutLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *labelInfo;
@property (retain, nonatomic) UIColor *labelInfoColor;
@property (retain, nonatomic) UIFont *labelInfoFont;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL needShowIcon;

+ (id)label;

- (void)refreshDynamicLabel;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
