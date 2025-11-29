@class AWEIMVideoCommentInputViewController, AWEIMVideoCommentAlertTopView, AWECommentModel, AWEAwemeModel, UIView, AWEIMVideoCommentAlertBottomView, NSString;

@interface AWEIMVideoCommentAlertViewController : UIViewController <AWEIMVideoCommentInputViewControllerDelegate, AWEIMSendCommentMessageProtocol>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) AWEIMVideoCommentAlertTopView *topView;
@property (retain, nonatomic) UIView *keyboardMaskView;
@property (retain, nonatomic) AWEIMVideoCommentInputViewController *inputVC;
@property (retain, nonatomic) AWEIMVideoCommentAlertBottomView *bottomView;
@property (copy, nonatomic) id /* block */ certainBlock;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willShowKeyboard;
- (void)configWithAweme:(id)a0 withComment:(id)a1 withEnterFrom:(id)a2;
- (void)showOnView:(id)a0;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (void)p_layoutSubview;
- (void)sendMsgAndDismissAlertView;
- (id)p_getTextFromInputView;
- (void)clickCancelBtn:(id)a0;
- (void)clickCertainBtn:(id)a0;
- (void)handleTapKeyboardMaskViewGes:(id)a0;
- (void)handlePanKeyboardMaskViewGes:(id)a0;
- (void)inputViewFrameWillChangeWithDiffHeight:(double)a0;
- (void)willDismissKeyboard;
- (void)handleIMExternalPushNoti:(id)a0;
- (void)p_dismissAlerView:(BOOL)a0 animated:(BOOL)a1;
- (void)p_dismissAlerView:(BOOL)a0;
- (id)p_sendVideoCommentMessageToUser:(id)a0;
- (id)p_sendTextMessageToUser:(id)a0;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
