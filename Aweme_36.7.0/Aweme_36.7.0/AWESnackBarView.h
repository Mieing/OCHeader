@class UITapGestureRecognizer, AWESnackBarViewContext, UIImageView, UILabel, UIButton;

@interface AWESnackBarView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) AWESnackBarViewContext *context;

- (void)initSubViews;
- (void)didClickedSnackBar;
- (void)dismissSnackBarAnimated:(BOOL)a0;
- (void)showSnackBarAnimated:(BOOL)a0;
- (void)dismissSnackBarIfNeeded;
- (void)p_rightBtnDidPressed;
- (void)showSnackBarAfterDismissOnView:(id)a0 oldContext:(id)a1;
- (void)updateSnackBarShowingStatus:(BOOL)a0 newContext:(id)a1 oldContext:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)updateWithContext:(id)a0;

@end
