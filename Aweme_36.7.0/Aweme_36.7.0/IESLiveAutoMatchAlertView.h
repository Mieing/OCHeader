@class IESLiveAutoMatchAlertViewConfig, NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveAutoMatchAlertView : UIView <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) IESLiveAutoMatchAlertViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUI;
- (void)setViewWithConfig:(id)a0;
- (void)onActionLabelClicked;
- (void)didClickedLeftButton;
- (void)didClickedRightButton;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
