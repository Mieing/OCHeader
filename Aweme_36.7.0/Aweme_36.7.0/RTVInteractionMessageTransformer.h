@protocol RTVEmoticonDataManagerInterface, RTVXRControllerInjector;

@interface RTVInteractionMessageTransformer : NSObject

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;

- (void)rtv_awakeFromControllerInjector;
- (id)__transformFromTextMessage:(id)a0;
- (id)viewModelWithMessages:(id)a0;
- (id)textViewModelWithMessages:(id)a0;
- (void).cxx_destruct;

@end
