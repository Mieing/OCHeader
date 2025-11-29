@class AWEIMTranspondListAlertTopView, NSArray, AWEIMTranspondListAlertBottomView, AWEURLModel, UIView, NSString, AWEIMTranspondListInputViewController;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMTranspondListAlertViewController : UIViewController <AWEIMTranspondListInputViewControllerDelegate>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) AWEIMTranspondListAlertTopView *topView;
@property (retain, nonatomic) UIView *keyboardMaskView;
@property (retain, nonatomic) AWEIMTranspondListInputViewController *inputVC;
@property (retain, nonatomic) AWEIMTranspondListAlertBottomView *bottomView;
@property (copy, nonatomic) id /* block */ certainBlock;
@property (retain, nonatomic) NSArray *shareModelArray;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (nonatomic) unsigned long long targetType;
@property (retain, nonatomic) AWEURLModel *mapImageURL;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willShowKeyboard;
- (void)showOnView:(id)a0;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (void)configAlertWithDict:(id)a0 toShareModels:(id)a1 withCertainBlock:(id /* block */)a2;
- (void)updateInputVCContent:(id)a0;
- (BOOL)isForwardMessage;
- (void)dismissAlertView:(BOOL)a0;
- (void)p_layoutSubview;
- (void)p_reAddTransportModel;
- (void)sendMsgAndDismissAlertView;
- (void)p_sendMsgAndDismissAlertView;
- (id)p_getTextFromInputView;
- (void)clickCancelBtn:(id)a0;
- (void)clickCertainBtn:(id)a0;
- (void)handleTapKeyboardMaskViewGes:(id)a0;
- (void)handlePanKeyboardMaskViewGes:(id)a0;
- (void)inputViewFrameWillChangeWithDiffHeight:(double)a0;
- (void)willDismissKeyboard;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
