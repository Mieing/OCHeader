@class UIImageView, UILabel, AWEIMNewAwemeContentProps, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMNewAwemeContentView : UIView

@property (retain, nonatomic) AWEIMNewAwemeContentProps *props;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *awemePlayIconImageView;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIImageView *awemeCoverImageView;

- (void)updateWithProps:(id)a0;
- (void)tapOnCell:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
