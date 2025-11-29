@class AWEIMMessage, NSString;

@interface AWEIMMessageListAddEmoticonComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListAddEmoticonInterface>

@property (retain, nonatomic) AWEIMMessage *targetMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)willDeleteMessage:(id)a0;
- (void)p_updateWithMessage:(id)a0 reason:(long long)a1;
- (void)p_findLatestGiphyGlobalIndexWithLimit:(long long)a0 groups:(id)a1 skipMsg:(id)a2;
- (void).cxx_destruct;

@end
