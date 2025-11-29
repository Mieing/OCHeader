@class NSString, UIImageView, UILabel, MMWebImageView, UIView;

@interface WAWebviewHighlightedBottomBannerView : UIButton

@property (retain, nonatomic) MMWebImageView *iconImgView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *descArrowImgView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIView *highlightMaskView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)reloadData;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
