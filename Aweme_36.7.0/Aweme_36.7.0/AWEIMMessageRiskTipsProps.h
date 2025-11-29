@protocol AWEIMMessageRiskModelProtocol;

@interface AWEIMMessageRiskTipsProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapHandleBlock;
@property (retain, nonatomic) id<AWEIMMessageRiskModelProtocol> riskTipsModel;

- (void).cxx_destruct;

@end
