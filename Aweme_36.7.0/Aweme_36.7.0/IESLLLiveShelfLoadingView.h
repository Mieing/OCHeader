@class IESLLPOILoadingView, UILabel;

@interface IESLLLiveShelfLoadingView : UIView

@property (retain, nonatomic) IESLLPOILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;

- (unsigned long long)localLifeLoadingExpType;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
