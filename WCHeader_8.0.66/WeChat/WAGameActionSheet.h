@class UIColor, NSArray, WAContact, NSString, UIView, UIButton;
@protocol WAGameActionSheetDelegate;

@interface WAGameActionSheet : MMObject {
    WAContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    BOOL m_isLandScape;
    BOOL m_isNewGroup;
    double kButtonFontSize;
    double MENU_ICON_LRMARGIN;
    double MENU_ICON_SIZE;
    double MENU_FONT_SIZE;
    double MENU_TO_TITLE;
    double kButtonHeight;
    double kHeaderButtonIconSize;
    double WAActivityHeadHonrizonMargin;
    UIColor *kMaskViewBGColor;
    double kMaskViewBGAlpha;
    UIColor *kContainerViewBGColor;
    UIColor *kMenuButtonColor;
    UIColor *kMenuButtonHighlightColor;
    UIColor *kMenuBorderColor;
    UIColor *kButtonTitleColor;
    UIColor *kMenuTitleColor;
    long long BLUR_EFFECT_TYPE;
    double kActionSheetWidth;
    double kBorderWidth;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) BOOL isUseWeAppModule;
@property (nonatomic) BOOL isDismissForbidAnimation;
@property (weak, nonatomic) id<WAGameActionSheetDelegate> delegate;
@property (nonatomic) long long actionSheetStyle;

- (id)STYLECOLORWithLight:(id)a0 ligthAlpha:(double)a1 dark:(id)a2 darkAlpha:(double)a3;
- (double)LANDSCAPEFLOAT:(id)a0 withPortrait:(id)a1;
- (id)initWithUsrName:(id)a0 orientation:(long long)a1 appType:(unsigned long long)a2 cancelButtonTitle:(id)a3 buttonTitleArray:(id)a4 delegate:(id)a5;
- (void)dealloc;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (void)dismissWithAnimation;
- (BOOL)isVisible;
- (void)setDebugTitles:(id)a0;
- (void)setStyle:(long long)a0;
- (void)setupMaskView;
- (void)setupContainerView;
- (double)addButtonToView:(id)a0 button:(id)a1 originY:(double)a2;
- (double)endButtonGroups:(id)a0 originY:(double)a1;
- (id)setupButtonsView;
- (id)setupMenuView:(double)a0;
- (id)genboundaryLine:(struct CGSize { double x0; double x1; })a0;
- (id)genNormalBtn:(id)a0;
- (id)genHeaderBtnWithContact:(id)a0 appType:(unsigned long long)a1;
- (void)onMenuButtonClicked:(id)a0;
- (void)onButtonClicked:(id)a0;
- (void)onHeaderButtonClicked:(id)a0;
- (void)onCancelButtonClick:(id)a0;
- (void)didRotate:(id)a0;
- (double)getActionSheetWidth;
- (double)getScreenWidth;
- (double)getScreenHeight;
- (BOOL)isSmallScreenLandscape;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })realSafeAreaInsets;
- (void).cxx_destruct;

@end
