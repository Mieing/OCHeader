@class UITextView, NSString, UIView, IESMMEffectMessage, UIButton;

@interface AWE2DTextInputViewController : AWEStudioBaseViewController <UITextViewDelegate>

@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIView *textViewContainerView;
@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double textViewMaxCenterY;
@property (retain, nonatomic) IESMMEffectMessage *effectMessageModel;
@property (nonatomic) unsigned long long remainingTextCount;
@property (copy, nonatomic) id /* block */ textDidFinishEditingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panAction:(id)a0;
- (void)refreshTextStateWithEffectMessageModel:(id)a0;
- (void)p_doneButtonClicked:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)setupUI;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)addNotificationObserver;
- (void)p_updateFrame;

@end
