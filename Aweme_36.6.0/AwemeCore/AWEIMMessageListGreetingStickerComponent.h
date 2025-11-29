@class NSString;
@protocol AWEIMMessageListSendMessageInterface;

@interface AWEIMMessageListGreetingStickerComponent : AWEIMComponentBase <AWEIMComponentLazyCreate, AWEIMMessageListGreetingStickerInterface>

@property (weak, nonatomic) id<AWEIMMessageListSendMessageInterface> sendService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
