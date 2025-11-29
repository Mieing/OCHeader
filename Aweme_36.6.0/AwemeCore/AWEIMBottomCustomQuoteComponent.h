@class UIButton, AWEIMBottomQuoteCommonView, NSString, YYLabel;

@interface AWEIMBottomCustomQuoteComponent : AWEIMComponentBase <AWEIMMessageListBottomQuoteViewProtocol, AWEIMMessageListInputModuleAction, AWEIMBottomCustomQuoteInterface>

@property (retain, nonatomic) AWEIMBottomQuoteCommonView *quoteCommonView;
@property (retain, nonatomic) YYLabel *hintLabel;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)closeBtnClicked:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (id)hintColor;
- (void)showText:(id)a0 hint:(id)a1;
- (void)inputViewControllerResetShowQuoteReply:(id)a0;
- (void).cxx_destruct;
- (id)textColor;
- (void)setupUI;

@end
