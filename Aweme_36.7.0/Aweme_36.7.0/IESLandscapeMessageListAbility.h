@class IESLiveMessageListGiftMaskView, NSString, UIImageView, HTSLiveMessageListUnreadTipView, UIView, IESLiveMessageLandscapeBackgroundView;
@protocol IESLiveRoomService, HTSLivePluginLayoutView;

@interface IESLandscapeMessageListAbility : NSObject <IESLiveFIFAPlayerScaleAction, IESMessgeListLandscapeProtocol>

@property (retain, nonatomic) IESLiveMessageLandscapeBackgroundView *bgView;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) UIImageView *noInteractionMask;
@property (nonatomic) BOOL isEnableSideStyle;
@property (nonatomic) BOOL isComponentsHide;
@property (weak, nonatomic) UIView<HTSLivePluginLayoutView> *messageListView;
@property (weak, nonatomic) HTSLiveMessageListUnreadTipView *unreadTipView;
@property (weak, nonatomic) IESLiveMessageListGiftMaskView *giftMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abilityWithRoomModel:(id)a0;

- (void)hideComponent;
- (void)showComponent;
- (void)didSetAttachingDIContext;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (BOOL)isShowedSideStyle;
- (void)hideMessageListBgView;
- (void)setMessageAreaViewsHidden:(BOOL)a0;
- (void)loadMessageListBgView;
- (id)messageListContainerView;
- (void)createNoInteractionMaskIfNeeded;
- (void)exitTyping;
- (void)addNoInteractionViewIfNeeded;
- (void)changeToKeyboardMessageListFrame;
- (void)removeNoInteractionViewIfNeeded;
- (void)changeToNormalMessageListFrame;
- (void)recoverStatus;
- (double)leftSideNormalMessageWidth;
- (void)prepareTransform:(BOOL)a0;
- (void)showMessageListBgView;
- (BOOL)rotationEventTriggeredV2:(long long)a0;
- (void)processKeyboardShow;
- (void)processKeyboardHide;
- (void)p_loadMessageListGiftMaskView;
- (void)showGiftMask;
- (void)setRightContainerHidden:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftSidePlayerFrame;
- (double)leftSideMessageWidth;
- (void)orientationTransitionBegin:(long long)a0;
- (BOOL)rotationEventTriggered:(long long)a0;
- (BOOL)keyboardEventTriggered:(BOOL)a0;
- (BOOL)clearEventTriggered:(BOOL)a0;
- (void)toggleFadeInOutAnimation:(BOOL)a0;
- (void)disableCommentTriggered:(BOOL)a0;
- (BOOL)giftMaskViewShowing;
- (void).cxx_destruct;
- (void)dealloc;

@end
