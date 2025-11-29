@class NSString, AWEIMLatestKindOfMessageInConversationComponent, BDBaseTransformer;

@interface AWEIMConversationElfBotMessageDetectComponent : AWEIMComponentBase <AWEIMMessageElfBotDetectMessageProtocol>

@property (retain, nonatomic) AWEIMLatestKindOfMessageInConversationComponent *latestGiphyComponent;
@property (retain, nonatomic) BDBaseTransformer *transformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)blockSet;

- (void)componentDidMounted:(id)a0;
- (void)publishElfBotMessageDetectWithMessage:(id)a0;
- (void).cxx_destruct;

@end
