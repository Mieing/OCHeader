@class CJPayButton, CJPayImageView, UIView, CJPayKeyboardContainerModel, CJPayStandardKeyboard;
@protocol CJPayKeyboardContainerDelegate;

@interface CJPayKeyboardContainerView : UIView

@property (retain, nonatomic) CJPayKeyboardContainerModel *model;
@property (retain, nonatomic) CJPayStandardKeyboard *keyboardView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) CJPayImageView *safeGuardImageView;
@property (retain, nonatomic) CJPayButton *topRightBtn;
@property (weak, nonatomic) id<CJPayKeyboardContainerDelegate> delegate;

- (void)setConfirmBtnText:(id)a0;
- (void)p_inputStr:(id)a0;
- (double)keyboardContainerViewHeight;
- (void)setupContentWithModel:(id)a0;
- (void)p_clickTopRightBtn;
- (void)p_resetTopRightBtnConfig;
- (double)keyboardContainerViewWidth;
- (double)p_calKeyboardViewHeight;
- (void)p_updateTopAreaViewStatus;
- (void)p_resetContainerViewLayout;
- (BOOL)p_needShowTopAreaView;
- (double)keyboardTopAreaHeight;
- (void)setKeyboardLocalTheme:(unsigned long long)a0;
- (double)p_bottomSafeMargin;
- (void)p_deleteStr;
- (void)p_completeInput;
- (void)showSafeGuardViewWithImageName:(id)a0;
- (void)hideSafeGuardView;
- (void)showTopRightBtnWithText:(id)a0 imageName:(id)a1;
- (void)hideTopRightBtn;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
