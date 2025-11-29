@class UIButton, NSString, WCAccountTextFieldItem, MMUILabel;
@protocol WCAccountAffiliatedAcctDelegate;

@interface WCAccountAffiliatedAcctPasswordViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCAccountTextFieldItem *textFieldPwdItem;
@property (retain, nonatomic) WCAccountTextFieldItem *textFieldVerifyPwdItem;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) id<WCAccountAffiliatedAcctDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useRedesignStyle;
- (BOOL)useSheetView;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)generatePasswordTextFieldItemWithVerify:(BOOL)a0;
- (void)checkDone;
- (void)onDone;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
