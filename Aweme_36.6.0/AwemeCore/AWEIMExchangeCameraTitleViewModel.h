@class AWEIMMessageConversation;

@interface AWEIMExchangeCameraTitleViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) long long quoteServerMessageId;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;

- (void).cxx_destruct;

@end
