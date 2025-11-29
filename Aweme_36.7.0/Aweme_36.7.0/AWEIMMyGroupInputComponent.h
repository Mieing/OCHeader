@class AWEIMMyGroupInputContainerView, NSString, UIView;
@protocol AWEIMShareAdditionTextViewProtocol, IESIMContactPickerSelectService;

@interface AWEIMMyGroupInputComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, AWEIMShareAdditionTextViewDelegate, AWEIMShareAdditionTextViewUIDelegate, IESIMContactPickerSearchAction, AWEIMMyGroupContentAction, IESIMContactPickerCollectionViewAction, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) AWEIMMyGroupInputContainerView *componentView;
@property (retain, nonatomic) UIView<AWEIMShareAdditionTextViewProtocol> *additionTextView;
@property (nonatomic) double panelNormalHeight;
@property (nonatomic) double customPanelHeight;
@property (nonatomic) double lastPanelHeight;
@property (retain, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (nonatomic) BOOL isFirstFrameRendered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppearAndRender;
- (void)textView:(id)a0 didClickButton:(unsigned long long)a1;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (id)searchService;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)searchCancelButtonClicked;
- (void)updateAdditionTextIfNeeded;
- (void)p_resetHeight;
- (void)p_trackClickSendWithShareModels:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)cancelSearch;
- (id)containerContext;

@end
