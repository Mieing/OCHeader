@class UIColor, AWEIMMessageConversation;

@interface AWEIMLiveFansGroupInviteContentPresenterProps : AWEIMUIViewPresenterProps

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) UIColor *liveFansGroupInviteContentCardBackgroundColor;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void).cxx_destruct;

@end
