@class AWEIMFoldMessageRiskWarningViewController, NSAttributedString, AWEIMMessage;

@interface AWEIMFoldMessageRiskWarningViewModel : NSObject

@property (weak, nonatomic) AWEIMFoldMessageRiskWarningViewController *riskWaringVC;
@property (copy, nonatomic) id /* block */ agreeTapAction;
@property (copy, nonatomic) id /* block */ disagreeTapAction;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSAttributedString *positive;
@property (copy, nonatomic) NSAttributedString *negative;
@property (retain, nonatomic) AWEIMMessage *message;

- (void)p_prepareProps;
- (id)initWithRiskWaringViewController:(id)a0 message:(id)a1;
- (void)p_onTapAgreeButton;
- (void)p_onTapDisAgreeButton;
- (void).cxx_destruct;

@end
