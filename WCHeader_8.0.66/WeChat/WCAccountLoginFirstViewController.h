@class NSString, UIImageView, UIView, UIButton;
@protocol WCAccountLoginFirstViewControllerDelegate;

@interface WCAccountLoginFirstViewController : WCAccountBaseViewController <ILinkEventExt, IMMLanguageMgrExt> {
    id<WCAccountLoginFirstViewControllerDelegate> m_delegate;
    UIView *m_view;
    UIView *m_bottomView;
    UIButton *m_regBtn;
    UIButton *m_loginBtn;
    UIButton *m_btnChangeLanguage;
    UIImageView *m_backgroundImageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)onLanguageChange;
- (void)setDelegate:(id)a0;
- (void)updateChangeLanguageBtn;
- (double)getVisibleHeight;
- (void)adjustViewAndNavBarRect;
- (void)adjustTableViewRect;
- (id)getBackgroundImgWithOrientation:(long long)a0;
- (BOOL)useSheetView;
- (BOOL)useTableView;
- (void)initView;
- (void)onChangeLanguage;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void).cxx_destruct;

@end
