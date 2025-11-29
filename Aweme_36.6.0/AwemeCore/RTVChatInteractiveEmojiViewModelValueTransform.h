@protocol RTVInteractionConfigureManagerInterface, RxInjector, RTVEmoticonDataManagerInterface;

@interface RTVChatInteractiveEmojiViewModelValueTransform : NSValueTransformer

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configManager;

- (void)rxAwakeFromPropertyInjection;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
