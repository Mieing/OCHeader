@class NSString, UIView;
@protocol AWEIMShareAdditionTextViewProtocol, AWEIMShareContactListProtocol;

@interface AWESharePanelContactComponent : AWEIMComponentBase <AWESharePanelComponentViewProtocol, AWEIMShareContactListDelegate, AWEIMShareAdditionTextViewUIDelegate, AWESharePanelContactInterface>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<AWEIMShareContactListProtocol> shareContactList;
@property (retain, nonatomic) UIView *dismissView;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) UIView<AWEIMShareAdditionTextViewProtocol> *additionTextView;
@property (nonatomic) double defaultTextViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openMorePanelWithPosition:(unsigned long long)a0 directShowKeyboard:(BOOL)a1;
- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (void)updateUIWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 stateDidChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)trackCommonParamsWithShareContactList:(id)a0;
- (id)createAdditionTextAndAppendToViewHierarchyWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)trackDidClickEmojiBtn;
- (void)dismissViewDidTap:(id)a0;
- (double)componentHeight;
- (id)buildContactList;
- (id)p_makeVerticalLayoutConfig;
- (BOOL)p_updateUIIfNeeded;
- (void)p_updateSheetHeightWithUserInteractionEnabledWithDuration:(double)a0;
- (id)shouldRecognizeAsynchronousWithGestures;
- (id)shouldRecognizeAsynchronousScrollViewArray;
- (void).cxx_destruct;
- (id)componentView;

@end
