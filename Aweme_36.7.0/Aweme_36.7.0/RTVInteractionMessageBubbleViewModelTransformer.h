@protocol RxInjector, RTVEmoticonDataManagerInterface;

@interface RTVInteractionMessageBubbleViewModelTransformer : NSValueTransformer

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;

- (void)rxAwakeFromPropertyInjection;
- (id)__messageText:(id)a0;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
