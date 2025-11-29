@class CAShapeLayer, NSString, UIView;

@interface AWESettingThemeWarningView : UIView <AWESettingThemeWarningViewProtocol>

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) NSString *page;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (BOOL)canShowSettingThemeWarningView;
- (BOOL)showSettingThemeWarningViewWithPage:(id)a0;
- (BOOL)isWarningViewShowing;
- (BOOL)showSettingThemeWarningViewWithPage:(id)a0 withCloseBlock:(id /* block */)a1;
- (void)closeBtnDidClick;
- (void)topViewDidClick;
- (void)p_closeWithCompletion:(id /* block */)a0;
- (void)p_trackerThemeSettingWithLightMode:(BOOL)a0;
- (void)settingBtnDidClick;
- (void)classicButtonDidClick:(id)a0;
- (BOOL)shouldShowThemeWarningView;
- (void)recordThemeWarningViewShowTimes;
- (void)showWarningView;
- (void)close;
- (void)setUp;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)show;

@end
