@class AWEIMShareLiveCardView, NSString;

@interface AWEIMShareLiveMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEUserMessage, AWEIMMessageVisibleLifeCycleProtocol>

@property (retain, nonatomic) AWEIMShareLiveCardView *bubbleView;
@property (nonatomic) BOOL bindRecordedThisCycle;
@property (nonatomic) unsigned long long timestampStartBuild;
@property (nonatomic) unsigned long long timestampStartBind;
@property (nonatomic) BOOL hasBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)p_defaultPostImageForMe:(id)a0;
+ (id)p_defaultPostImageForOther:(id)a0;
+ (id)identifier;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (id)visibleContentView;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)p_addGesture;
- (void)configWithMessage:(id)a0;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)liveCoverTapped:(id)a0;
- (void)cardAvatarTapped:(id)a0;
- (void)forceUpdateRoomModel;
- (void)p_addVMKVO;
- (void)p_updateLiveStatusWithForceUpdate:(BOOL)a0;
- (void)p_updateBubbleView;
- (BOOL)p_groupLiveIsVisible;
- (id)p_awemeWithLiveRoom:(id)a0;
- (void)enterProfileWithMessage:(id)a0;
- (void)tapLiveCardActionAtLocation:(unsigned long long)a0;
- (void)tapReceiveRoomInfoWithModel:(id)a0 error:(id)a1 location:(unsigned long long)a2;
- (void)jumpToLiveOrProfile:(unsigned long long)a0;
- (void)trackEcomLiveMsgClickWithLocation:(unsigned long long)a0;
- (BOOL)p_isFansGroup;
- (void)receiveRoomInfoWithMessageId:(id)a0 model:(id)a1 error:(id)a2;
- (BOOL)isBlocked;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)dealloc;
- (void)willDisplayCell;

@end
