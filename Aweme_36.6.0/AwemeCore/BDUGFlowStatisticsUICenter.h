@interface BDUGFlowStatisticsUICenter : NSObject

- (void)setContinuePlayButtonStyle:(id)a0;
- (id)continuePlayButtonStyle;
- (id)getOrderButtonTitle;
- (id)getOrderButtonStyle;
- (id)getFlowReminderTitle;
- (id)getFlowReminderColor;
- (id)getContinuePlayButtonTitle;
- (id)getContinuePlayButtonStyle;
- (id)getLocalFlowToastMsgModel;
- (id)getFreeFlowToastMsgTitle;
- (void)setOrderButtonTitle:(id)a0;
- (void)setOrderButtonStyle:(id)a0;
- (void)setFlowReminderTitle:(id)a0;
- (void)setFlowReminderColor:(id)a0;
- (void)setContinuePlayButtonTitle:(id)a0;
- (void)setFreeFlowToastMsgTitle:(id)a0;
- (id)orderButtonTitle;
- (id)orderButtonStyle;
- (id)flowReminderTitle;
- (id)flowReminderColor;
- (id)continuePlayButtonTitle;
- (id)normalFreeFlowTitle;
- (id)willUseUpFreeFlowTitle;
- (id)usedUpFreeFlowTitle;
- (void)setFlowUIWithModel:(id)a0;

@end
