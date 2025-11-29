@class NSString;

@interface AWEIMLinkLiveTextAndButtonMessage : AWEIMTextAndButtonMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *inviteToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)canEmojiReplyByDefault;
- (id)defaultMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
