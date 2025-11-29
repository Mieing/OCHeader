@class NSString, UIImageView, UIImage, UIView, MMWebImageView, MMUILabel;

@interface SendToWeAppAppDeviceNormalCell : MMTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImageView *cornerImageView;
@property (retain, nonatomic) UIImageView *weappIconCircle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MMUILabel *weappTypeLabel;
@property (nonatomic) BOOL isPromotionApp;
@property (nonatomic) long long cornerStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)resetUI;
- (void)configWithItem:(id)a0 needBottomLine:(BOOL)a1;
- (void)layoutSubviews;
- (void)updateCornerMask;
- (void).cxx_destruct;

@end
