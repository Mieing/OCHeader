@class NSString, UIImage, WCAgreementCheckBox, WCFullPhoneNumInputHelper, TakeOrSelectHeadImageLogic, UIButton, WCRedesignTextItem, CountryCodeWrap, NSMutableArray, MMUILabel, MMUIButton;
@protocol WCAccountRegisterViewControllerDelegate;

@interface WCAccountRegisterViewController : WCAccountBaseViewController <TakeOrSelectHeadImageLogicDelegate, WCBaseInfoItemDelegate> {
    id<WCAccountRegisterViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIButton *headImageButton;
@property (retain, nonatomic) WCRedesignTextItem *nicknameTextItem;
@property (retain, nonatomic) WCFullPhoneNumInputHelper *fullPhoneNumInputHelper;
@property (retain, nonatomic) MMUIButton *passwordVisibleButton;
@property (retain, nonatomic) WCRedesignTextItem *passwordTextItem;
@property (retain, nonatomic) WCAgreementCheckBox *agreementCheckBox;
@property (retain, nonatomic) MMUILabel *privacyLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIImage *headImage;
@property (retain, nonatomic) CountryCodeWrap *countryCodeWrap;
@property (retain, nonatomic) NSMutableArray *availableItems;
@property (retain, nonatomic) TakeOrSelectHeadImageLogic *headImageLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)verifyPassword:(id)a0 withError:(id *)a1;

- (BOOL)showHead;
- (BOOL)showNickName;
- (BOOL)showPwd;
- (BOOL)showPhoneNum;
- (BOOL)shouldShowAgreementView;
- (BOOL)shouldShowPrivacy;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)canBecomeFirstResponder;
- (void)setDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)initNavigationBar;
- (void)initView;
- (void)initData;
- (void)fillData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)refreshView;
- (BOOL)canChangeMobile;
- (id)getTitle;
- (id)getNextButtonTitle;
- (id)regionButtonItem;
- (id)phoneNumberTextItem;
- (void)showHeadImageOption;
- (void)onTapPasswordVisibleButton;
- (void)onNext;
- (void)onGetHeadImage:(id)a0;
- (void)checkNext;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void).cxx_destruct;

@end
