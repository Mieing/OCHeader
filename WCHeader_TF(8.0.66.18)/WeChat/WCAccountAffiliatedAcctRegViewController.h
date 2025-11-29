@class MMUILabel, WCAgreementCheckBox, NSString, WCAccountTextFieldItem, TakeOrSelectHeadImageLogic, UIButton;
@protocol WCAccountAffiliatedAcctDelegate;

@interface WCAccountAffiliatedAcctRegViewController : WCAccountBaseViewController <TakeOrSelectHeadImageLogicDelegate, WCBaseInfoItemDelegate>

@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) UIButton *headImgBtn;
@property (retain, nonatomic) TakeOrSelectHeadImageLogic *photoLogic;
@property (retain, nonatomic) WCAccountTextFieldItem *textFieldNameItem;
@property (retain, nonatomic) WCAgreementCheckBox *checkBox;
@property (retain, nonatomic) UIButton *nextBtn;
@property (weak, nonatomic) id<WCAccountAffiliatedAcctDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useRedesignStyle;
- (BOOL)useSheetView;
- (BOOL)autoHandleKeyboardEvent;
- (void)viewDidBePoped:(BOOL)a0;
- (void)initView;
- (void)checkNextBtnEnable;
- (void)showHeadImageOption;
- (void)onNext;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)onGetHeadImage:(id)a0;
- (void).cxx_destruct;

@end
