@interface CJPayButtonInfoHandlerActionsModel : NSObject

@property (copy, nonatomic) id /* block */ closePayDeskAction;
@property (copy, nonatomic) id /* block */ backToPayHomePageAction;
@property (copy, nonatomic) id /* block */ changeCardAction;
@property (copy, nonatomic) id /* block */ closeAlertAction;
@property (copy, nonatomic) id /* block */ backAction;
@property (copy, nonatomic) id /* block */ findPwdAction;
@property (copy, nonatomic) id /* block */ mobileUpdateAction;
@property (copy, nonatomic) id /* block */ bindCardAction;
@property (copy, nonatomic) id /* block */ cardListAction;
@property (copy, nonatomic) id /* block */ uploadIDCardAction;
@property (copy, nonatomic) id /* block */ errorInPageAction;
@property (copy, nonatomic) id /* block */ continuePayingAction;
@property (copy, nonatomic) id /* block */ logoutBizRealNameAction;
@property (copy, nonatomic) id /* block */ alertPresentAction;
@property (copy, nonatomic) id /* block */ reSendMsgAction;
@property (copy, nonatomic) id /* block */ superLinkAction;

- (void).cxx_destruct;

@end
