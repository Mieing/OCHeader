@class UIButton, NSString, UIImageView, NSTimer, UILabel, UIView, UITapGestureRecognizer;
@protocol AFDBottomSnackBarViewDelegate;

@interface AFDBottomSnackBarView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *titleTailLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) NSTimer *snackBarTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) UIButton *tipsButton;
@property (retain, nonatomic) NSString *customTheme;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (weak, nonatomic) id<AFDBottomSnackBarViewDelegate> delegate;
@property (nonatomic) BOOL shouldHold;

- (void)p_setUI;
- (void)showSnackBarAfterDismissOnView;
- (id)p_createTimer;
- (void)didClickedSnackBar;
- (void)dismissSnackBarAnimated:(BOOL)a0;
- (void)configSnackBarWithIconImageName:(id)a0 titleText:(id)a1 titleColorName:(id)a2 titleTailText:(id)a3 tipsText:(id)a4 tipsColorName:(id)a5 indicatorImageName:(id)a6 clickAction:(id /* block */)a7 inTheme:(id)a8;
- (void)showSnackBarAnimated:(BOOL)a0;
- (void)dismissSnackBarIfNeeded;
- (void)configSnackBarWithIconImage:(id)a0 titleText:(id)a1 titleColor:(id)a2 tipsText:(id)a3 tipsColor:(id)a4 indicatorImage:(id)a5 clickAction:(id /* block */)a6;
- (void)configSnackBarWithIconImage:(id)a0 titleText:(id)a1 titleColor:(id)a2 tipsText:(id)a3 tipsColor:(id)a4 indicatorImage:(id)a5;
- (void)updateSnackBarShowingStatus:(BOOL)a0;
- (void)didClickedTipsButton:(id)a0;
- (void)configSnackBarWithIconImageName:(id)a0 titleText:(id)a1 titleColorName:(id)a2 tipsText:(id)a3 tipsColorName:(id)a4 indicatorImageName:(id)a5 inTheme:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
