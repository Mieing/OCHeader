@class RTVChatInteractiveEmojiViewModel, RTVAvatarContext, RTVAvatarView, BDImageView;
@protocol RxInjector, RTVUserProfileManagerInterface;

@interface RTVChatInteractiveEmojiView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManger;
@property (retain, nonatomic) BDImageView *animatedImageView;
@property (retain, nonatomic) RTVAvatarView *avatarView;
@property (retain, nonatomic) RTVAvatarContext *avatarContext;
@property (retain, nonatomic) RTVChatInteractiveEmojiViewModel *model;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__createDependencies;
- (void).cxx_destruct;

@end
