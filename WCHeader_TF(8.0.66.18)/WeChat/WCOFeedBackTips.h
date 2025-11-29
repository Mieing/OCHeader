@class UIView, NSString, EmoticonBoardView, UIImageView, MMGrowTextView, UIButton, NSMutableArray, WCOutFeedbackCgi, WCInputController;

@interface WCOFeedBackTips : MMWindowViewController <MMGrowTextViewDelegate, InputControllerDelegate, IMMGrowTextViewExt>

@property (retain, nonatomic) UIView *starView;
@property (retain, nonatomic) UIView *feedWordingSubView;
@property (retain, nonatomic) UIView *inviteView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (nonatomic) double tipsHeight;
@property (retain, nonatomic) UIButton *backgroundBtn;
@property (nonatomic) double feedWordingSubViewHeight;
@property (retain, nonatomic) NSMutableArray *starBtnArr;
@property (retain, nonatomic) NSMutableArray *wordingBtnArr;
@property (retain, nonatomic) UIView *bottomBtnView;
@property (retain, nonatomic) UIImageView *inputView;
@property (retain, nonatomic) EmoticonBoardView *moticonBoardView;
@property (retain, nonatomic) UIButton *expressionButton;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) UIView *textBackgroundImage;
@property (retain, nonatomic) WCInputController *inputController;
@property (retain, nonatomic) NSMutableArray *resitemArr;
@property (nonatomic) long long currStarTag;
@property (retain, nonatomic) NSString *defaultShowText;
@property (nonatomic) BOOL hasInputSth;
@property (retain, nonatomic) WCOutFeedbackCgi *cgi;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) int roomid;
@property (nonatomic) long long callSeq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initStarView;
- (id)genBackgroundView;
- (void)initInputView;
- (void)initBottomButtons;
- (void)initInputToolView;
- (void)initInputController;
- (void)becomeInput;
- (void)resignInput;
- (void)onHideView:(id)a0;
- (void)onClickStarBtn:(id)a0;
- (void)onClickWordingBtn:(id)a0;
- (void)onConfirm;
- (void)onCancelFeedback;
- (void)showLoadingOk;
- (void)didCommitText:(id)a0;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)a0;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (id)getInputText;
- (void)parseConfigXml:(id)a0;
- (void).cxx_destruct;

@end
