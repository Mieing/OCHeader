@class UIColor, IESIMMessageThreadAppendixMsgBodyProps, IESIMMessageThreadAppendixButtonProps, AWEIMMessageBubbleGradientPresenterProps;

@interface IESIMMessageThreadAppendixProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) IESIMMessageThreadAppendixButtonProps *buttonProps;
@property (retain, nonatomic) IESIMMessageThreadAppendixMsgBodyProps *msgProps;
@property (retain, nonatomic) AWEIMMessageBubbleGradientPresenterProps *gradientProps;

- (void).cxx_destruct;

@end
