@class RxTwoTuple, NSString;

@interface AWEIMEnterChatInsertMsgComponent : AWEIMComponentBase <AWEIMMessageListEnterChatSubscriberProtocol>

@property (retain, nonatomic) RxTwoTuple *sendUserActionForRightNow;
@property (retain, nonatomic) RxTwoTuple *sendUserActionForWaitUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (void).cxx_destruct;

@end
