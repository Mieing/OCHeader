@class NSString, UILabel, WCPayWebImageView;

@interface WCPaySecuritySettingTipsBack : UIView

@property (retain) NSString *imageUrl;
@property (retain) NSString *desc;
@property (retain) WCPayWebImageView *imageView;
@property (retain) UILabel *label;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageUrl:(id)a1 desc:(id)a2;
- (void)layoutSubviews;
- (void)updateImage;
- (void)updateDesc;
- (void).cxx_destruct;

@end
