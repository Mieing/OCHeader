@class AWETeenModePasswordInputView, UIButton, NSString, UIView, UILabel, NSObject;
@protocol AWEGuardianPlatformPasswordVerifyViewDataSource, AWEGuardianPlatformPasswordVerifyViewDelegate;

@interface AWEGuardianPlatformPasswordVerifyView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) NSObject<AWEGuardianPlatformPasswordVerifyViewDelegate> *delegate;
@property (weak, nonatomic) NSObject<AWEGuardianPlatformPasswordVerifyViewDataSource> *dataSource;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWETeenModePasswordInputView *passwordView;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showOnView:(id)a0;
- (void)p_layout;
- (void)p_setupSubviews;
- (void)p_dismiss:(BOOL)a0;
- (void)p_dismissFromUserTapAction;
- (void)p_animateContentViewWithKeyboardHeight:(double)a0 duration:(double)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)show;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;
- (void)clearPassword;

@end
