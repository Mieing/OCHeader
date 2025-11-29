@class UIView, NSString, WCPayAreaItem, WCBaseTextFieldItem, WCPayCss, NSMutableArray, UIButton, UILabel;
@protocol WCPayAddressViewControllerDelegate;

@interface WCPayAddressViewController : WCPayBaseViewController <WCPayAreaItemDelegate, WCBaseInfoItemDelegate>

@property (weak) id<WCPayAddressViewControllerDelegate> m_delegate;
@property (retain) UIView *containerView;
@property (retain) UIView *headerView;
@property (retain) UILabel *titleLabel;
@property (retain) UIView *lineView;
@property (retain) UIButton *areaBaseView;
@property (retain) WCPayAreaItem *areaView;
@property (retain) WCBaseTextFieldItem *addressView;
@property (retain) UIView *footerView;
@property (retain) UIButton *nextButton;
@property (retain) WCPayCss *css;
@property (retain) NSMutableArray *itemArray;
@property double keyboardHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)onTapEmpty;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateTitleView;
- (void)updateLineView;
- (void)updateAreaView;
- (void)onClickAreaView;
- (void)resignItem;
- (void)updateAddressView;
- (void)updateFooterView;
- (void)updateNextButton;
- (void)onClickNextButton;
- (void)addTitle:(id)a0 baseView:(id)a1;
- (double)leftTitleMaxWidth;
- (void)addRightImage:(id)a0 baseView:(id)a1;
- (void)addLine:(id)a0 option:(id /* block */)a1;
- (BOOL)buttonEnabled;
- (void)resignExcept:(id)a0;
- (void)onWCPayAreaItemDidChoseRegion:(id)a0;
- (void)WCBaseInfoItemCancelEdit:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;

@end
