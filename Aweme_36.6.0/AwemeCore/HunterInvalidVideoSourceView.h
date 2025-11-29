@class UIImageView, UILabel;

@interface HunterInvalidVideoSourceView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL useSmallIcon;
@property (nonatomic) BOOL textHidden;
@property (nonatomic) BOOL forceLightMode;

- (void)onAWEUIThemeChangeNotification;
- (void)updateUIForCurrentTheme;
- (void)updateUIForLightTheme;
- (void)updateUIForDarkTheme;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
