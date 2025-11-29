@class AWEIMFoldMessageRiskWarningView, AWEIMFoldMessageRiskWarningViewModel, AWEIMMessage;
@protocol IESIMMessageListViewControllerProtocol;

@interface AWEIMFoldMessageRiskWarningViewController : UIViewController

@property (retain, nonatomic) AWEIMFoldMessageRiskWarningView *riskWaringView;
@property (retain, nonatomic) AWEIMFoldMessageRiskWarningViewModel *riskWaringViewModel;
@property (weak, nonatomic) id<IESIMMessageListViewControllerProtocol> messageListVC;
@property (retain, nonatomic) AWEIMMessage *message;

- (void)p_addBinds;
- (id)initWithMessageListVC:(id)a0 message:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
