@class UILabel, NSString, UIView;
@protocol IESECUILoadingViewProtocol;

@interface IESECInfinitelyDefaultLoadingView : UIView

@property (nonatomic) long long refreshType;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *activityIndicatorView;
@property (copy, nonatomic) NSString *loadingText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 loadingType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
