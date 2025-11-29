@class NSString, UIImageView, MMWebImageView, UILabel, UIView;

@interface MMMultiSelectContactsJumpAppBannerView : MMUIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) NSString *defaultIconImageName;

+ (id)titleLabelFont;
+ (id)contentLabelFont;
+ (double)heightForViewWithWidth:(double)a0 title:(id)a1 andContent:(id)a2;

- (void)updateViewWithTitle:(id)a0 content:(id)a1 iconUrlString:(id)a2 andIconDefaultName:(id)a3;
- (void)layoutSubviews;
- (void)updateForIlink;
- (void).cxx_destruct;

@end
