@class AWEIMMessage, NSString;

@interface AWEIMMessageQuickEmoticonReplyComponent : AWEIMComponentBase <AWEIMInputActionBarAction, AWEIMMessageDiggAction, AWEIMMessageListDataAction>

@property (retain, nonatomic) AWEIMMessage *replyMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)actionBarDidConfigEntryItems:(id)a0;
- (void)actionBarDidClickAction:(id)a0;
- (void)giphyMessageDiggedWithMessage:(id)a0;
- (void).cxx_destruct;

@end
