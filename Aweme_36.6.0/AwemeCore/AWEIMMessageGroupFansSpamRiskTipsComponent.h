@class AWEIMRiskMessageViewViewModel;

@interface AWEIMMessageGroupFansSpamRiskTipsComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMRiskMessageViewViewModel *riskModel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_riskMsgViewTapped;
- (void)p_addRiskInfoKVO;
- (void)p_recallWithRiskMessage:(id)a0;
- (void).cxx_destruct;

@end
