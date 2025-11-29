@class UIViewController, AWEIMUser, NSString, AWENoticePushViewModel, UIView, UIButton;
@protocol AWEIMQuickInputViewControllerProtocol;

@interface AWECommentReplyViewController : UIViewController <AWEIMQuickInputViewControllerDelegate, AWEDigitalWellbeingMessage>

@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIButton *landscapeMaskButton;
@property (retain, nonatomic) UIViewController<AWEIMQuickInputViewControllerProtocol> *imQuickInputViewController;
@property (retain, nonatomic) UIView *commentContentView;
@property (retain, nonatomic) AWEIMUser *fromIMUser;
@property (nonatomic) BOOL isFirstViewDidAppear;
@property (nonatomic) double topInsets;
@property (retain, nonatomic) AWENoticePushViewModel *noticePushModel;
@property (retain, nonatomic) NSString *trackEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1;
- (void)didSendContent:(id)a0 textView:(id)a1 userInfo:(id)a2;
- (void)inputViewControllerDidChangeHeight:(id)a0;
- (void)inputViewController:(id)a0 growingTextViewDidChange:(id)a1;
- (void)p_dismissViewController;
- (void)p_fetchIMUser;
- (void)p_replyCommentWithContent:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
