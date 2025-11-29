@class IESLiveChatChannelAnimationItem, HTSEventContext, NSString, HTSEventForwardingView, NSNumber, IESLiveVideoGiftController;
@protocol IESLiveChatChannelAnimationPlayerDelegate;

@interface IESLiveChatChannelAnimationPlayer : NSObject <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) HTSEventForwardingView *animationContainerView;
@property (weak, nonatomic) HTSEventForwardingView *containerView;
@property (retain, nonatomic) IESLiveChatChannelAnimationItem *currentItem;
@property (nonatomic) unsigned long long currentLayoutStyle;
@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSNumber *currentChatChannelID;
@property (weak, nonatomic) id<IESLiveChatChannelAnimationPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)didSetAttachingDIContext;
- (id)initWithTrackContext:(id)a0;
- (void)updateLayoutStyle:(unsigned long long)a0;
- (void)updateVideoLayout;
- (id)localPathForItem:(id)a0;
- (void)destroyGiftController;
- (void)addPadModeMaskLayerWithSize:(struct CGSize { double x0; double x1; })a0 rate:(double)a1;
- (void)trackGiftEffectShowWithItem:(id)a0;
- (void)startPlayAnimation:(id)a0 asyncRender:(BOOL)a1 useDrawTimer:(BOOL)a2;
- (void).cxx_destruct;
- (void)stop;

@end
