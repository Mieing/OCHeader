@class UIView, NSString, AWEIMBatchSendMessageViewModel, UITextView, UIButton, CAShapeLayer, AWEIMFansGroupMultiselectListView, UILabel;

@interface AWEIMBatchSendMessageViewController : UIViewController <UITextViewDelegate, AWEIMFansGroupMultiselectListViewDelegate>

@property (retain, nonatomic) AWEIMBatchSendMessageViewModel *viewModel;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMFansGroupMultiselectListView *multiselectListView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL shouldBlockAnimation;
@property (nonatomic) BOOL keyboardIsShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__dismiss;
- (void)__setupUI;
- (BOOL)__checkTextViewTextMessageLength;
- (void)moreCellTapped;
- (void)__addKVOController;
- (void)__hide;
- (void)__show;
- (void)__configUI;
- (void)__closeBtnClicked;
- (void)__confirmBtnClicked;
- (id)initWithFansGroupInfoList:(id)a0;
- (void)__setupNoti;
- (void)keyboardWillChangeFrameNotification:(id)a0;
- (void)keyboardDidHideNotification:(id)a0;
- (void)boardRiseWithHeight:(double)a0 duration:(double)a1;
- (void)boardResetWithDuration:(double)a0;
- (BOOL)textViewStringIsEmpty:(id)a0;
- (BOOL)__resetKeyboardStatusIfNeeded;
- (void)__refreshWithSelectList:(id)a0;
- (void)__showAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)__hideAnimtionWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)__showDoubleCheckPopupView;
- (id)__firstSelectedModelInFansGroupList;
- (void)__trackSendMessageSubmitWithOptionConfirm:(BOOL)a0;
- (void)__sendBatchMessage;
- (void)__maskViewTapAction:(id)a0;
- (void)__maskViewPanAction:(id)a0;
- (void)__contentViewPanAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)keyboardDidShowNotification:(id)a0;
- (void)keyboardWillHideNotification:(id)a0;

@end
