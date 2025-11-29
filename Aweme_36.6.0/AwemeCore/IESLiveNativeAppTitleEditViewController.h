@class NSString, UITextField, IESLiveNativeAppApi, UILabel, UIView, UIButton;
@protocol IESLiveNativeAppTitleEditDelegate;

@interface IESLiveNativeAppTitleEditViewController : UIViewController <UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *titleEditContentView;
@property (retain, nonatomic) UILabel *titleEditViewTitle;
@property (retain, nonatomic) UITextField *titleTextField;
@property (retain, nonatomic) UIButton *titleEditViewDeleteButton;
@property (retain, nonatomic) UIButton *titleEditViewConfirmButton;
@property (retain, nonatomic) UILabel *titleEditViewBottomLine;
@property (retain, nonatomic) UILabel *titleEditViewTextDesc;
@property (retain, nonatomic) UILabel *titleEditViewTipLabel;
@property (weak, nonatomic) id<IESLiveNativeAppTitleEditDelegate> delegate;
@property (retain, nonatomic) IESLiveNativeAppApi *api;
@property (nonatomic) unsigned long long editType;
@property (copy, nonatomic) NSString *contentTitle;
@property (copy, nonatomic) NSString *viewTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)blankAreaDidClick;
- (void)titleEditViewDidClickConfirmButton;
- (void)titleEditViewDidClickDeleteButton;
- (void)close;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)removeObserver;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)stringContainsEmoji:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)setUpUI;

@end
