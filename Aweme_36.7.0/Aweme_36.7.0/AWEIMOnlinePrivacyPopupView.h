@class AWEUILoadingView, NSString, UIImageView, AWEIMActiveUserIndicativeView, UILabel, UIView, UIButton;
@protocol AWESettingSwitchProtocol;

@interface AWEIMOnlinePrivacyPopupView : AWEIMBasePopupView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *onlineDotView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *activeTipsLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *activeTipsSwitch;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)showTitle:(id)a0 subTitle:(id)a1 setting:(id)a2;
- (void)settingButtonClick:(id)a0;
- (void)updateOnlineDotViewScale:(BOOL)a0;
- (void)updateOnlineDotViewHidden:(BOOL)a0;
- (void)p_refeshOnlineDotState:(BOOL)a0;
- (void)p_setupUITitle:(id)a0 subTitle:(id)a1 setting:(id)a2;
- (void)p_addLoadingViewToVC;
- (void)p_removeLoadingViewFromVC;
- (void)switchControlDidChanged:(id)a0;
- (void).cxx_destruct;

@end
