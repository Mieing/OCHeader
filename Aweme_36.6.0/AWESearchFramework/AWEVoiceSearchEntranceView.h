@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEVoiceSearchEntranceView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *iconRefreshView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *iconLottieView;
@property (nonatomic) unsigned long long lastLottieType;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (BOOL)enableSearchBigMode;
- (void)updateEntranceStyle;
- (void)updateEntranceTheme:(long long)a0;
- (double)calculateEntranceWidthWithTitle:(id)a0;
- (void)updateEntranceTheme:(long long)a0 type:(id)a1;
- (void)playEntranceLottieWithTheme:(long long)a0 type:(id)a1;
- (void)updateEntranceStyleForSearchResult;
- (void)stopEntranceLottieWithTheme:(long long)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
