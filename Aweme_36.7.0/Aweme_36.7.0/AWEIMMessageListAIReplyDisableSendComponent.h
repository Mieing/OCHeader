@class NSString;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMMessageListAIReplyDisableSendComponent : AWEIMComponentBase <AWEIMMessageListAIReplyDisableSendComponentProtocol, AWEIMComponentLazyCreate>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
