@class NSString, UIImageView, NSTimer, UIView, UILabel, UITapGestureRecognizer;
@protocol AWEFavoriteVideoSnackBarViewDelegate;

@interface AWEFavoriteVideoSnackBarView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) NSTimer *snackBarTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *collectVideoContainerView;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) id<AWEFavoriteVideoSnackBarViewDelegate> delegate;
@property (weak, nonatomic) UIView *lastA11yView;

- (void)p_setUI;
- (void)showSnackBarAfterDismissOnView;
- (id)p_createTimer;
- (void)didClickedSnackBar;
- (void)dismissSnackBarAnimated:(BOOL)a0;
- (void)showSnackBarAnimated:(BOOL)a0;
- (void)dismissSnackBarIfNeeded;
- (void)updateSnackBarShowingStatus:(BOOL)a0 itemID:(id)a1;
- (void)didEndDisplayAwemeModel:(id)a0;
- (void)showCollectVideoSnackBar;
- (void)recreateTimer;
- (void)showCollectVideoSnackBarAnimated;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;

@end
