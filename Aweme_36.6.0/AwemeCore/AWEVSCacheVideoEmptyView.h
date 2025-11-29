@class UIImageView, UILabel;

@interface AWEVSCacheVideoEmptyView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)p_setPlaceholderImage;
- (void)p_receiveUIThemeDidChangeNotification;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)p_commonInit;

@end
