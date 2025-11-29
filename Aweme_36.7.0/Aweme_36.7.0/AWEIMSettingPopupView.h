@class AWEUILoadingView, NSString, UIImageView, UIView, UILabel, UIButton;
@protocol AWESettingSwitchProtocol;

@interface AWEIMSettingPopupView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *activeTipsLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *activeTipsSwitch;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) id /* block */ onSwitchValueChageBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHeadIcon:(id)a0;
- (void)settingButtonClick:(id)a0;
- (void)switchControlDidChanged:(id)a0;
- (void)bgMaskViewTapAction:(id)a0;
- (void)backgroundViewPanAction:(id)a0;
- (void)__hide;
- (void)__setupUITitle:(id)a0 subTitle:(id)a1 image:(id)a2 setting:(id)a3 confirmTitle:(id)a4;
- (void)__showWithDuration:(double)a0;
- (void)__hideWithDuration:(double)a0;
- (void)setSwitchON:(BOOL)a0;
- (void)showTitle:(id)a0 subTitle:(id)a1 image:(id)a2 setting:(id)a3 confirmTitle:(id)a4;
- (void)addLoadingViewToVC;
- (void)removeLoadingViewFromVC;
- (void)__show;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
