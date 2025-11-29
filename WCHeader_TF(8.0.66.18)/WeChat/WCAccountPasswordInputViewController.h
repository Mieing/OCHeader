@class UIButton, WCRedesignTextItem, NSString;
@protocol WCAccountPasswordInputViewControllerDelegate;

@interface WCAccountPasswordInputViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>

@property (retain, nonatomic) WCRedesignTextItem *passwordTextItem;
@property (retain, nonatomic) UIButton *nextButton;
@property (weak, nonatomic) id<WCAccountPasswordInputViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initView;
- (void)checkNextBtnEnable;
- (void)onLogin;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
