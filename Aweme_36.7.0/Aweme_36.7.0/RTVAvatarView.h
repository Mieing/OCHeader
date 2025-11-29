@class UITapGestureRecognizer, RTVAvatarContext, NSString, UIView, BDImageView;
@protocol RTVVoipConfigureManagerInterface, RxInjector;

@interface RTVAvatarView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) BDImageView *avatarImageView;
@property (retain, nonatomic) RTVAvatarContext *context;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *avatarURI;
@property (nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__updateAvatarImage;
- (void).cxx_destruct;
- (id)init;
- (void)handleTapGesture:(id)a0;

@end
