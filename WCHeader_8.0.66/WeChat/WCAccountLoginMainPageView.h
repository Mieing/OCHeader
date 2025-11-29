@class WCRedesignTextItem, WCAccountControlData, NSString, WCFullPhoneNumInputHelper, UIView, MMUILabel;
@protocol MMUIViewControllerDelegate;

@interface WCAccountLoginMainPageView : UIView <WCBaseInfoItemDelegate, MMUIViewControllerDelegate>

@property (retain, nonatomic) UIView *phoneNumberPageView;
@property (retain, nonatomic) MMUILabel *phoneNumberTitleLabel;
@property (retain, nonatomic) WCFullPhoneNumInputHelper *fullPhoneNumInputHelper;
@property (retain, nonatomic) UIView *otherPageView;
@property (retain, nonatomic) MMUILabel *otherTitleLabel;
@property (retain, nonatomic) WCRedesignTextItem *accountTextItem;
@property (retain, nonatomic) WCRedesignTextItem *passwordTextItem;
@property (copy, nonatomic) id /* block */ checkNextHandler;
@property (copy, nonatomic) id /* block */ nextHandler;
@property (nonatomic) unsigned long long page;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> vcDelegate;
@property (retain, nonatomic) WCAccountControlData *data;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) double horizonPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)changeToPage:(unsigned long long)a0;
- (void)addCheckNextHandler:(id /* block */)a0;
- (id)checkNext;
- (void)addNextHandler:(id /* block */)a0;
- (void)initPages;
- (void)initPhoneNumberPage;
- (void)updatePhoneNumberPageLayout;
- (void)initOtherPage;
- (void)updateOtherPageLayout;
- (id)phoneNumberTextItem;
- (id)regionButtonItem;
- (id)currentPageView;
- (void)updateCurrentPageLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)getViewController;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
