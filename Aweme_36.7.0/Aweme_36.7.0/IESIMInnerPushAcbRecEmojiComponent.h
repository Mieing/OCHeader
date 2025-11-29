@class NSString;

@interface IESIMInnerPushAcbRecEmojiComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (copy, nonatomic) NSString *conversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void).cxx_destruct;

@end
