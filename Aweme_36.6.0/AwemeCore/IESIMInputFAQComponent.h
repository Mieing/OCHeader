@class NSString, AWEIMInputFAQListViewModel, UIView, AWEIMInputVCBadgeButton;

@interface IESIMInputFAQComponent : AWEIMComponentBase <IESIMInputFAQComponentInterface, IESIMInputStateChangedActionProtocol, IESIMInputLayoutAction>

@property (retain, nonatomic) AWEIMInputFAQListViewModel *faqListViewModel;
@property (retain, nonatomic) AWEIMInputVCBadgeButton *faqBtn;
@property (retain, nonatomic) UIView *faqPanelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didFetchFaqList:(id)a0;
- (void)faqBtnClicked:(id)a0;
- (void)addFaqPanelIfNeeded:(id)a0;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)triggerLayoutAfterPanelChangeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowFAQBtn;
- (id)faqButton;
- (void).cxx_destruct;

@end
