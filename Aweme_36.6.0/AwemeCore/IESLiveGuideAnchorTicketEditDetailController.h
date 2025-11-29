@class UIView, UITextView, IESLiveGuideAnchorTicketEditDetailStore;

@interface IESLiveGuideAnchorTicketEditDetailController : UIViewController

@property (retain, nonatomic) IESLiveGuideAnchorTicketEditDetailStore *store;
@property (weak, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIView *navView;
@property (retain, nonatomic) UIView *backgroundView;

- (void)backButtonAction:(id)a0;
- (void)dismissPannel;
- (double)p_getPageTop;
- (void)addImageButtonAction:(id)a0;
- (void)trackPaidLiveActivityInfoFillingPageDetailReturn;
- (void)trackPaidLiveActivityInfoFillingPageDetailDone;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)initWithStore:(id)a0;
- (void)viewDidLoad;
- (void)addImage;
- (void)setupUI;
- (void)doneButtonAction:(id)a0;

@end
