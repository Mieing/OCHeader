@class UIImageView, UIView;

@interface AWEIMMessageStateIndicator : NSObject

@property (nonatomic) long long messageState;
@property (retain, nonatomic) UIView *icon;
@property (retain, nonatomic) UIImageView *currentStateImageView;
@property (nonatomic) double progress;
@property (nonatomic) BOOL needReloadForThemeChange;
@property (nonatomic) long long indicatorScene;

+ (id)imageForProcess:(double)a0;

- (void)changeToState:(long long)a0 progress:(double)a1;
- (void)changeToState:(long long)a0 readReceipt:(id)a1;
- (void)updateIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__configIcon;
- (void)__configThemeChangeEvent;
- (void)__startAnimating;
- (void)__stopAnimating;
- (id)__imageForState:(long long)a0 progress:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
