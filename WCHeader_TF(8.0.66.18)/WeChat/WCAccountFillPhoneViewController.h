@class UIButton, NSString, WCFullPhoneNumInputHelper;
@protocol WCAccountFillPhoneViewControllerDelegate;

@interface WCAccountFillPhoneViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>

@property (retain, nonatomic) WCFullPhoneNumInputHelper *fullPhoneNumInputHelper;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) NSString *restrictiveISOContryCode;
@property (weak, nonatomic) id<WCAccountFillPhoneViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *headerTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isForbidPageSheet;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)autoHandleKeyboardEvent;
- (void)initView;
- (void)checkNextBtnEnable;
- (void)onFillPhoneBack;
- (void)onNext;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
