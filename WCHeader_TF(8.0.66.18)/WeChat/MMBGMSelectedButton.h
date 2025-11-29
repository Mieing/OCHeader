@class UILabel, WCFinderAnimationLoadingView, UIImageView;

@interface MMBGMSelectedButton : MMUIButton

@property (nonatomic) unsigned long long buttonState;
@property (retain, nonatomic) UILabel *btnLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *checkMarkIconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
