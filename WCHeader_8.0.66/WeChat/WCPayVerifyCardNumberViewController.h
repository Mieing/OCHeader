@class UILabel, NSString, WCPayInputView;
@protocol WCPayVerifyCardNumberViewControllerDelegate;

@interface WCPayVerifyCardNumberViewController : WCPayBaseViewController <WCPayInputViewDelegate>

@property (retain, nonatomic) WCPayInputView *payInputView;
@property (retain, nonatomic) UILabel *tips;
@property (weak, nonatomic) id<WCPayVerifyCardNumberViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)realodView;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)inputView:(id)a0 didChangeText:(id)a1;
- (void).cxx_destruct;

@end
