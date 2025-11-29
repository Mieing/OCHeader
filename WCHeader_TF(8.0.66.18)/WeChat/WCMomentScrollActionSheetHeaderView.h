@class NSString, MMUIActivityIndicatorView, UILabel, UIView;

@interface WCMomentScrollActionSheetHeaderView : UIView

@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *seperator;

+ (double)heightForTitle:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;
- (void)initView;
- (void)initLoadingView;
- (void)initTitleLabel;
- (void)initSeperator;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
