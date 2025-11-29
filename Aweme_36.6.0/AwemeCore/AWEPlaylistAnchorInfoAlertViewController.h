@class NSString, LOTAnimationView, UIView, UILabel, UIButton;

@interface AWEPlaylistAnchorInfoAlertViewController : UIView

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *mainButton;
@property (copy, nonatomic) NSString *lottiePath;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;

- (void)p_setUpUI;
- (void)maskViewTapAction:(id)a0;
- (void)didClickedMainButton;
- (id)initWithLottiePath:(id)a0 mainTitle:(id)a1 subTitle:(id)a2;
- (void)didClickedCloseButton;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)showWithCompletion:(id /* block */)a0;

@end
