@class NSString, AWEProfileHeaderContext, AWEBDXWebViewController, UITapGestureRecognizer;

@interface AWEProfileHeaderLongVideoBannerCell : UICollectionViewCell

@property (retain, nonatomic) AWEBDXWebViewController *bannerViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (copy, nonatomic) NSString *bannerScheme;
@property (retain, nonatomic) AWEProfileHeaderContext *context;

- (void)configWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapCell:(id)a0;

@end
