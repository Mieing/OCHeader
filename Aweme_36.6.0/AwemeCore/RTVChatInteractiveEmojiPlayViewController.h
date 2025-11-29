@class RTVChatInteractiveEmojiPlayViewLayout, NSString, RTVChatInteractiveEmojiViewModelValueTransform, NSMutableSet, NSMutableArray;
@protocol RTVChatController, RTVInteractionRecorder, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVEffectEmojiAnimationController, RTVEmoticonDataManagerInterface;

@interface RTVChatInteractiveEmojiPlayViewController : UIViewController <RTVChatControllerObserver, RTVChatInteractiveEmojiPlayViewController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeArea;
@property (readonly, nonatomic) RTVChatInteractiveEmojiViewModelValueTransform *valueTransform;
@property (readonly, nonatomic) id<RTVEffectEmojiAnimationController> effectEmojiAnimationController;
@property (retain, nonatomic) RTVChatInteractiveEmojiPlayViewLayout *layout;
@property (retain, nonatomic) NSMutableSet *displayingEmojis;
@property (readonly, weak, nonatomic) id<RTVInteractionRecorder> interactionStateRecorder;
@property (readonly, nonatomic) NSMutableArray *stateRecorderTokens;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)deactive;
- (void)__createComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__configComponents;
- (void)changeEmojiPlayAnimationEnable:(BOOL)a0;
- (void)__bindStateRecorder;
- (void)updateSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didReceiveNewMessages:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__insetSafeArea;
- (id)__generateEmojiPlayViewWithMessageViewModel:(id)a0;
- (void)receiveInteractiveEmojiMessage:(id)a0;
- (void)active;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
