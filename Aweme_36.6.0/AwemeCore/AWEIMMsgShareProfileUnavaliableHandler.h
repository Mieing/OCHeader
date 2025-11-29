@class AWEIMConversationContext, NSString;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMMsgShareProfileUnavaliableHandler : NSObject <AWEIMMsgUnavaliableHandlerProtocol>

@property (nonatomic) long long messageType;
@property (nonatomic) unsigned long long requestInterval;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComponentCenter:(id)a0;
- (id)initWithConversationContext:(id)a0;
- (id)messageUnavaliableItemids:(id)a0;
- (void)updateCustomizeUnavaliableStateFor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
