@class UIView, NSString, NSArray, UIImage, UIButton, NSMutableArray, WAContact, UIVisualEffectView, UILabel;
@protocol WAAppActionSheetDelegate;

@interface WAAppActionSheet : MMObject {
    WAContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    NSString *m_destructiveTitle;
    UIImage *m_fakeViewImage;
}

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) BOOL m_isLandScape;
@property (nonatomic) BOOL m_isDismissing;
@property (retain, nonatomic) NSMutableArray *btnArray;
@property (retain, nonatomic) UIButton *destructiveBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *interateView;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<WAAppActionSheetDelegate> m_delegate;
@property (nonatomic) BOOL isUseWeAppModule;
@property (nonatomic) long long menuState;
@property (nonatomic) BOOL isHideAppInfoBtn;
@property (nonatomic) BOOL isHideCancelBtn;

- (id)initWithUsrName:(id)a0 appType:(unsigned long long)a1 cancelButtonTitle:(id)a2 destructiveButtonTitle:(id)a3 buttonTitleArray:(id)a4 delegate:(id)a5;
- (void)dealloc;
- (id)getHeaderButtonTitle:(id)a0;
- (double)getActionSheetWidth;
- (void)didRotate:(id)a0;
- (double)getViewWidth;
- (double)getViewHeight;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (void)dismissWithAnimation;
- (BOOL)isVisible;
- (void)setDebugTitles:(id)a0;
- (void)initContainerView;
- (id)setupButtonsView;
- (void)initInterateView;
- (BOOL)isSupportVisualEffect;
- (id)genPrivacyStateView;
- (id)genNormalBtn:(id)a0;
- (id)genDestructiveBtn;
- (id)genWeAppInfoBtnWithContact:(id)a0 appType:(unsigned long long)a1;
- (void)onButtonClicked:(id)a0;
- (void)onStateViewClicked:(id)a0;
- (void)onHeaerButtonClicked:(id)a0;
- (void)onDestructiveButtonClick:(id)a0;
- (void)onCancelButtonClick:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })realSafeAreaInsets;
- (void)_releaseViews;
- (void)addLongPressGestureForHeaderButton:(id)a0;
- (void)onLongPressHeaderButtonLabel:(id)a0;
- (id)setupAppInfoView:(double)a0;
- (BOOL)isSmallScreenLandscape;
- (void).cxx_destruct;

@end
