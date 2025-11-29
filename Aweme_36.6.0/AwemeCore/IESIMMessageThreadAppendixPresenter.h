@class AWEIMUIViewPresenter, IESIMMessageThreadAppendixButtonPresenter, AWEIMMessageBubbleGradientPresenter, IESIMMessageThreadAppendixMsgBodyPresenter;

@interface IESIMMessageThreadAppendixPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMMessageBubbleGradientPresenter *gradientPresenter;
@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) IESIMMessageThreadAppendixMsgBodyPresenter *messageBody;
@property (retain, nonatomic) IESIMMessageThreadAppendixButtonPresenter *actionButton;

- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
