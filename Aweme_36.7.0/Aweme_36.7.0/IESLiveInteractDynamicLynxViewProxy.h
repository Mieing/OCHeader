@class NSString, LynxView, UIView;
@protocol IESLiveInteractUserModel;

@interface IESLiveInteractDynamicLynxViewProxy : NSObject <IESLiveInteractSeatProvider>

@property (weak, nonatomic) LynxView *lynxView;
@property (nonatomic) long long seatIndex;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (weak, nonatomic) UIView *seatContaienr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithLynxView:(id)a0 seatIndex:(long long)a1 user:(id)a2;

- (id)emptyImageView;
- (id)nickNameView;
- (void)fallbackUnrecognizedSelector:(SEL)a0;
- (id)fanticketView;
- (void)dynamicUpdateItemInfo:(id)a0;
- (id)linkmicUser;
- (void)dynamicResetWithIds:(id)a0;
- (void)dynamicUpdateSeatUIItemInfo:(id)a0;
- (id)interactGiftContainer;
- (id)emojiWidgetContainer;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)avatarImageView;

@end
