@class NSString, UIView, AWEGrowingTextView, UIButton;
@protocol RTVTextInputControllerDelegate, RTVColorAdaptorInterface, RTVXRControllerInjector, RTVVoipResourceFetcherInterface, IESIMLittleEmoticonMatcher, AWEIMEmoticonContainerViewProtocol;

@interface AWERTVTextInputViewController : UIViewController <AWEGrowingTextViewDelegate, AWEIMEmoticonKeyBoardDelegate, RTVTextInputController>

@property (retain, nonatomic) AWEGrowingTextView *textView;
@property (nonatomic) long long currentInputType;
@property (nonatomic) long long oldInputType;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVColorAdaptorInterface> colorAdaptor;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) id<IESIMLittleEmoticonMatcher> emoticonDataManager;
@property (retain, nonatomic) UIView *inputBar;
@property (retain, nonatomic) UIView *keyboardContainerView;
@property (retain, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *emoticonView;
@property (retain, nonatomic) UIButton *emoticonBtn;
@property (retain, nonatomic) UIButton *sendBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVTextInputControllerDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)growingTextViewDidChange:(id)a0;
- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (BOOL)growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void)sendBtnClicked:(id)a0;
- (void)rtv_awakeFromControllerInjector;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCFoldedFrame;
- (double)defaultInputHeight;
- (void)emoticonBtnClicked:(id)a0;
- (void)__addObservers;
- (void)__layoutComponents;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)__configComponents;
- (void)__removeObservers;
- (void)__createComponnets;
- (double)emoticonContentViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCFoldedFrame:(double)a0;
- (void)resetButtonsSelected;
- (void)refreshInputVCFrame:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputVCUnfoldFrame:(double)a0;
- (void)updateRightButtonsBottom;
- (BOOL)__checkTextViewTextMessageLength;
- (void)sendTextViewTextMessage;
- (void)__layoutSubviews;
- (void)didUpdateInputVCFrame;
- (BOOL)__successRefreshTextViewUI;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)inputText;

@end
