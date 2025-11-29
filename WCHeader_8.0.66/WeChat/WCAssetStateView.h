@class UIImageView, UILabel, UIView;

@interface WCAssetStateView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (nonatomic) struct CGSize { double width; double height; } iconImageSize;
@property (readonly, nonatomic) UILabel *tipsLabel;
@property (readonly, nonatomic) UILabel *actionLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
