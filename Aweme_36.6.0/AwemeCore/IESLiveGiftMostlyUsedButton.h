@class UIImageView, UILabel, IESLiveGiftMostlyUsedButtonViewModel;
@protocol IESLiveCompoundSubscription;

@interface IESLiveGiftMostlyUsedButton : UIView

@property (retain, nonatomic) IESLiveGiftMostlyUsedButtonViewModel *viewModel;
@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)bindViewModel;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithViewModel:(id)a0;

@end
