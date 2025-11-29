@class UIButton;
@protocol AWEUserLoginOtherLoginViewDelegate;

@interface AWEUserLoginOtherLoginView : UIView

@property (retain, nonatomic) UIButton *otherLoginButton;
@property (weak, nonatomic) id<AWEUserLoginOtherLoginViewDelegate> delegate;

- (void)otherLoginAction;
- (id)createLoginButton;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
