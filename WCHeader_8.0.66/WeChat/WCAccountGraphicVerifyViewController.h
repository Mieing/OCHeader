@class WCRedesignTextItem, UIButton, UIImageView, NSString, MMUIButton, MMUILabel;
@protocol WCAccountGraphicVerifyViewControllerDelegate;

@interface WCAccountGraphicVerifyViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate> {
    id<WCAccountGraphicVerifyViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCRedesignTextItem *textItem;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMUIButton *refreshButton;
@property (retain, nonatomic) UIButton *verifyButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)initNavigationBar;
- (void)initView;
- (void)refreshViewWithData:(id)a0;
- (void)checkNext;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void).cxx_destruct;

@end
