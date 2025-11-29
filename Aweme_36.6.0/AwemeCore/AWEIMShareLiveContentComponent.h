@class NSString;
@protocol AWEIMLiveMessageExtendedCarouselComponentInterface, AWEIMLiveMessageAutoPlayInteractorInterface;

@interface AWEIMShareLiveContentComponent : AWEIMFlexComponent <AWEUserMessage, AWEIMMessageContentInterface, AWEIMShareLiveContentInterface>

@property (weak, nonatomic) id<AWEIMLiveMessageAutoPlayInteractorInterface> liveMessageAutoPlayInteractor;
@property (weak, nonatomic) id<AWEIMLiveMessageExtendedCarouselComponentInterface> liveMessageExtendedCarouselComponent;
@property (nonatomic) BOOL bindRecordedThisCycle;
@property (nonatomic) unsigned long long timestampStartBuild;
@property (nonatomic) unsigned long long timestampStartBind;
@property (nonatomic) BOOL hasBlocked;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) BOOL isCardVisible;
@property (nonatomic) BOOL shouldShowExtendedArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)p_awemeWithLiveRoom:(id)a0;
+ (BOOL)p_groupLiveIsVisible:(id)a0 con:(id)a1;
+ (BOOL)p_isFansGroup:(id)a0;
+ (void)enterProfileWithMessage:(id)a0 context:(id)a1;
+ (void)jumpToLiveOrProfile:(unsigned long long)a0 viewModel:(id)a1 context:(id)a2;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (id)visibleContentView;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)p_createPresenter;
- (void)forceUpdateRoomModel;
- (void)p_addVMKVO;
- (void)p_addKVOForCarousel;
- (id)shareLiveMessage;
- (void)p_fetchRoomOwnerIfNeeded;
- (void)p_updateLiveStatusWithForceUpdate:(BOOL)a0;
- (void)p_updateBubbleView;
- (void)liveCoverTapped;
- (void)cardAvatarTapped;
- (BOOL)p_groupLiveIsVisible;
- (void)p_receiveRoomInfoWithMessageId:(id)a0 model:(id)a1 error:(id)a2;
- (void)enterProfileWithMessage:(id)a0;
- (void)tapLiveCardActionAtLocation:(unsigned long long)a0;
- (void)tapReceiveRoomInfoWithModel:(id)a0 error:(id)a1 location:(unsigned long long)a2;
- (void)jumpToLiveOrProfile:(unsigned long long)a0;
- (void)trackEcomLiveMsgClickWithLocation:(unsigned long long)a0;
- (BOOL)p_isFansGroup;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end
