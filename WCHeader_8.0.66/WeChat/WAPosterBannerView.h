@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface WAPosterBannerView : UIView

@property (retain, nonatomic) UIView *titleDescContainer;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (nonatomic) BOOL isPortrait;
@property (copy, nonatomic) NSString *weappName;
@property (copy, nonatomic) NSString *weappDesc;
@property (retain, nonatomic) UIImage *qrCodeImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateContent;
- (void).cxx_destruct;

@end
